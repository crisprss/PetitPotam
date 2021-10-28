

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for efsr.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "efsr_h.h"

#define TYPE_FORMAT_STRING_SIZE   417                               
#define PROC_FORMAT_STRING_SIZE   1087                              
#define EXPR_FORMAT_STRING_SIZE   13                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _efsr_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } efsr_MIDL_TYPE_FORMAT_STRING;

typedef struct _efsr_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } efsr_MIDL_PROC_FORMAT_STRING;

typedef struct _efsr_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } efsr_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const efsr_MIDL_TYPE_FORMAT_STRING efsr__MIDL_TypeFormatString;
extern const efsr_MIDL_PROC_FORMAT_STRING efsr__MIDL_ProcFormatString;
extern const efsr_MIDL_EXPR_FORMAT_STRING efsr__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: DefaultIfName, ver. 1.0,
   GUID={0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}} */

 extern const MIDL_STUBLESS_PROXY_INFO DefaultIfName_ProxyInfo;


static const RPC_CLIENT_INTERFACE DefaultIfName___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &DefaultIfName_ProxyInfo,
    0x02000001
    };
RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcClientInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;

static RPC_BINDING_HANDLE DefaultIfName__MIDL_AutoBindHandle;


long Proc0_EfsRpcOpenFileRaw_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [context_handle][out] */ void **arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  0,
                  0,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc1_EfsRpcReadFileRaw_Downlevel( 
    /* [context_handle][in] */ void *arg_0,
    /* [out] */ struct pipe_
        {
        void (__RPC_USER * pull) (
            char * state,
            unsigned char * buf,
            unsigned long esize,
            unsigned long * ecount );
        void (__RPC_USER * push) (
            char * state,
            unsigned char * buf,
            unsigned long ecount );
        void (__RPC_USER * alloc) (
            char * state,
            unsigned long bsize,
            unsigned char * * buf,
            unsigned long * bcount );
        char * state;
        } 	*arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  1,
                  0,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc2_EfsRpcWriteFileRaw_Downlevel( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ struct pipe_
        {
        void (__RPC_USER * pull) (
            char * state,
            unsigned char * buf,
            unsigned long esize,
            unsigned long * ecount );
        void (__RPC_USER * push) (
            char * state,
            unsigned char * buf,
            unsigned long ecount );
        void (__RPC_USER * alloc) (
            char * state,
            unsigned long bsize,
            unsigned char * * buf,
            unsigned long * bcount );
        char * state;
        } 	*arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  2,
                  0,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


void Proc3_EfsRpcCloseRaw_Downlevel( 
    /* [context_handle][out][in] */ void **arg_0)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  3,
                  0,
                  arg_0);
    
}


long Proc4_EfsRpcEncryptFileSrv_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  4,
                  0,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc5_EfsRpcDecryptFileSrv_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  5,
                  0,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc6_EfsRpcQueryUsersOnFile_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [ref][out] */ struct Struct_220_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  6,
                  0,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc7_EfsRpcQueryRecoveryAgents_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [ref][out] */ struct Struct_220_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  7,
                  0,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc8_EfsRpcRemoveUsersFromFile_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_220_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  8,
                  0,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc9_EfsRpcAddUsersToFile_Downlevel( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_346_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  9,
                  0,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc10_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][in] */ struct Struct_282_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  10,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc11_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [unique][in] */ struct Struct_392_t *arg_5,
    /* [in] */ long arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  11,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( long  )_RetVal.Simple;
    
}


long Proc12_EfsRpcFileKeyInfo_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [ref][out] */ struct Struct_392_t **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  12,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc13_EfsRpcDuplicateEncryptionInfoFile_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [unique][in] */ struct Struct_392_t *arg_5,
    /* [in] */ long arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  13,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( long  )_RetVal.Simple;
    
}


long Proc14_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_136_t *arg_1,
    /* [in] */ struct Struct_462_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  14,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc15_EfsRpcAddUsersToFileEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [unique][in] */ struct Struct_392_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ struct Struct_346_t *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  15,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc16_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [unique][in] */ struct Struct_392_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [ref][out] */ struct Struct_392_t **arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  16,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( long  )_RetVal.Simple;
    
}


long Proc17_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [ref][out] */ struct Struct_392_t **arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  17,
                  0,
                  IDL_handle,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc18_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [ref][out] */ struct Struct_392_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  18,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc19_EfsRpcFileKeyInfoEx_Downlevel( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [unique][in] */ struct Struct_392_t *arg_2,
    /* [in] */ struct Struct_392_t *arg_3,
    /* [unique][in] */ struct Struct_492_t *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  19,
                  0,
                  IDL_handle,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc20_EfsRpcFlushEfsCache_Downlevel( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  20,
                  0,
                  IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const efsr_MIDL_PROC_FORMAT_STRING efsr__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0_EfsRpcOpenFileRaw_Downlevel */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 30 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 36 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_3 */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1_EfsRpcReadFileRaw_Downlevel */

/* 54 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 64 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 66 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x24 ),	/* 36 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 76 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 86 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 88 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 90 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter arg_1 */

/* 92 */	NdrFcShort( 0x4114 ),	/* Flags:  pipe, out, simple ref, srv alloc size=16 */
/* 94 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 96 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 98 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 100 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2_EfsRpcWriteFileRaw_Downlevel */

/* 104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 116 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 124 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 126 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 136 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 138 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 140 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter arg_1 */

/* 142 */	NdrFcShort( 0x10c ),	/* Flags:  pipe, in, simple ref, */
/* 144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 146 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3_EfsRpcCloseRaw_Downlevel */

/* 154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x3 ),	/* 3 */
/* 162 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 164 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 168 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0x38 ),	/* 56 */
/* 172 */	NdrFcShort( 0x38 ),	/* 56 */
/* 174 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 176 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 186 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 188 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 190 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Procedure Proc4_EfsRpcEncryptFileSrv_Downlevel */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 202 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 222 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5_EfsRpcDecryptFileSrv_Downlevel */

/* 234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x5 ),	/* 5 */
/* 242 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 244 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 254 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 268 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6_EfsRpcQueryUsersOnFile_Downlevel */

/* 282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x6 ),	/* 6 */
/* 290 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 300 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 302 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 312 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 318 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7_EfsRpcQueryRecoveryAgents_Downlevel */

/* 330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x7 ),	/* 7 */
/* 338 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 350 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 360 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 364 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 366 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 370 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8_EfsRpcRemoveUsersFromFile_Downlevel */

/* 378 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 388 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 398 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 408 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 412 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 418 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9_EfsRpcAddUsersToFile_Downlevel */

/* 426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x9 ),	/* 9 */
/* 434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 436 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 446 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 456 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 460 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 462 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 466 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10_EfsRpcFileKeyInfoEx_Downlevel */

/* 474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0xa ),	/* 10 */
/* 482 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 484 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 488 */	NdrFcShort( 0x10 ),	/* 16 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 494 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 504 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 508 */	NdrFcShort( 0x124 ),	/* Type Offset=292 */

	/* Parameter arg_2 */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11_EfsRpcFileKeyInfoEx_Downlevel */

/* 528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0xb ),	/* 11 */
/* 536 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 538 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 542 */	NdrFcShort( 0x18 ),	/* 24 */
/* 544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 546 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 548 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 560 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 564 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 568 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_3 */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 582 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 584 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 586 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter arg_6 */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12_EfsRpcFileKeyInfo_Downlevel */

/* 600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0xc ),	/* 12 */
/* 608 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 610 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 620 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 630 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 634 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 642 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 644 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 646 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13_EfsRpcDuplicateEncryptionInfoFile_Downlevel */

/* 654 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0xd ),	/* 13 */
/* 662 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 664 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 666 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 668 */	NdrFcShort( 0x18 ),	/* 24 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 674 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 684 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 688 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 694 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_3 */

/* 696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 698 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 710 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 712 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter arg_6 */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14_EfsRpcFileKeyInfoEx_Downlevel */

/* 726 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0xe ),	/* 14 */
/* 734 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 736 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 744 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 746 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 756 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 760 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Parameter arg_2 */

/* 762 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 764 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 766 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc15_EfsRpcAddUsersToFileEx_Downlevel */

/* 774 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0xf ),	/* 15 */
/* 782 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 784 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 786 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 794 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 810 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 812 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 814 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter arg_3 */

/* 816 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 818 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 820 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_4 */

/* 822 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 824 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 826 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16_EfsRpcFileKeyInfoEx_Downlevel */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x10 ),	/* 16 */
/* 842 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 848 */	NdrFcShort( 0x10 ),	/* 16 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 854 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 870 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 874 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter arg_3 */

/* 876 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 880 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_4 */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 888 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 890 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 892 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17_EfsRpcFileKeyInfoEx_Downlevel */

/* 900 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x11 ),	/* 17 */
/* 908 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 910 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 918 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 920 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 930 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 932 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 934 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18_EfsRpcFileKeyInfoEx_Downlevel */

/* 942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x12 ),	/* 18 */
/* 950 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 952 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 954 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 960 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 962 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 976 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 978 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 982 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19_EfsRpcFileKeyInfoEx_Downlevel */

/* 990 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x13 ),	/* 19 */
/* 998 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1000 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1010 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1022 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1024 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 1026 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1028 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1030 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter arg_3 */

/* 1032 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1034 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1036 */	NdrFcShort( 0x12c ),	/* Type Offset=300 */

	/* Parameter arg_4 */

/* 1038 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1040 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1042 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20_EfsRpcFlushEfsCache_Downlevel */

/* 1050 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1060 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1070 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const efsr_MIDL_TYPE_FORMAT_STRING efsr__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 20 */	NdrFcShort( 0x4 ),	/* Offset= 4 (24) */
/* 22 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 24 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (22) */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	
			0x11, 0x0,	/* FC_RP */
/* 34 */	NdrFcShort( 0x4 ),	/* Offset= 4 (38) */
/* 36 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 38 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (36) */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x12, 0x0,	/* FC_UP */
/* 60 */	NdrFcShort( 0x78 ),	/* Offset= 120 (180) */
/* 62 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x6 ),	/* 6 */
/* 66 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 68 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x6 ),	/* 6 */
/* 72 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (62) */
/* 76 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 84 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 86 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 88 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 90 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (78) */
/* 96 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 98 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 100 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (68) */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 108 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 114 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 116 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 118 */	NdrFcShort( 0x10 ),	/* 16 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x6 ),	/* Offset= 6 (128) */
/* 124 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 126 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 128 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 130 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (104) */
/* 132 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 134 */	NdrFcShort( 0x20 ),	/* 32 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x8 ),	/* Offset= 8 (146) */
/* 140 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 142 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 144 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 146 */	
			0x12, 0x0,	/* FC_UP */
/* 148 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (90) */
/* 150 */	
			0x12, 0x0,	/* FC_UP */
/* 152 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (116) */
/* 154 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 168 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 172 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 174 */	
			0x12, 0x0,	/* FC_UP */
/* 176 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (132) */
/* 178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 180 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x10 ),	/* 16 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x6 ),	/* Offset= 6 (192) */
/* 188 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 190 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 192 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 194 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (158) */
/* 196 */	
			0x11, 0x0,	/* FC_RP */
/* 198 */	NdrFcShort( 0xffee ),	/* Offset= -18 (180) */
/* 200 */	
			0x11, 0x0,	/* FC_RP */
/* 202 */	NdrFcShort( 0x4a ),	/* Offset= 74 (276) */
/* 204 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 208 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 210 */	NdrFcShort( 0x4 ),	/* 4 */
/* 212 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 214 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 216 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 218 */	NdrFcShort( 0x10 ),	/* 16 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x6 ),	/* Offset= 6 (228) */
/* 224 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 226 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 228 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 230 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (204) */
/* 232 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 234 */	NdrFcShort( 0x18 ),	/* 24 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* Offset= 8 (246) */
/* 240 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 242 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 246 */	
			0x12, 0x0,	/* FC_UP */
/* 248 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (90) */
/* 250 */	
			0x12, 0x0,	/* FC_UP */
/* 252 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (216) */
/* 254 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 264 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 268 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 270 */	
			0x12, 0x0,	/* FC_UP */
/* 272 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (232) */
/* 274 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 276 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x6 ),	/* Offset= 6 (288) */
/* 284 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 286 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 288 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 290 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (254) */
/* 292 */	
			0x12, 0x0,	/* FC_UP */
/* 294 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (232) */
/* 296 */	
			0x12, 0x0,	/* FC_UP */
/* 298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (300) */
/* 300 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 302 */	NdrFcShort( 0x10 ),	/* 16 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x6 ),	/* Offset= 6 (312) */
/* 308 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 310 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 312 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 314 */	NdrFcShort( 0xff2e ),	/* Offset= -210 (104) */
/* 316 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 318 */	NdrFcShort( 0xffea ),	/* Offset= -22 (296) */
/* 320 */	
			0x11, 0x0,	/* FC_RP */
/* 322 */	NdrFcShort( 0xff32 ),	/* Offset= -206 (116) */
/* 324 */	
			0x11, 0x0,	/* FC_RP */
/* 326 */	NdrFcShort( 0x22 ),	/* Offset= 34 (360) */
/* 328 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcLong( 0x8 ),	/* 8 */
/* 338 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 348 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 352 */	0x10,		/* Corr desc:  field pointer,  */
			0x5d,		/* FC_EXPR */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 358 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 360 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0xc ),	/* Offset= 12 (378) */
/* 368 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 370 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (328) */
/* 372 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (338) */
/* 376 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 378 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 380 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (348) */
/* 382 */	
			0x11, 0x0,	/* FC_RP */
/* 384 */	NdrFcShort( 0xffac ),	/* Offset= -84 (300) */
/* 386 */	
			0x12, 0x0,	/* FC_UP */
/* 388 */	NdrFcShort( 0x2 ),	/* Offset= 2 (390) */
/* 390 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 392 */	NdrFcShort( 0x20 ),	/* 32 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* Offset= 8 (404) */
/* 398 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 400 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 402 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 404 */	
			0x12, 0x0,	/* FC_UP */
/* 406 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (180) */
/* 408 */	
			0x12, 0x0,	/* FC_UP */
/* 410 */	NdrFcShort( 0xff4e ),	/* Offset= -178 (232) */
/* 412 */	
			0x12, 0x0,	/* FC_UP */
/* 414 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (300) */

			0x0
        }
    };

static const efsr_MIDL_EXPR_FORMAT_STRING efsr__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x3,		/* FC_EXPR_VAR */
			0x8,		/* FC_LONG */
/*  6 */	NdrFcShort( 0x4 ),	/* 4 */
/*  8 */	0x3,		/* FC_EXPR_VAR */
			0x8,		/* FC_LONG */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

static const unsigned short efsr__MIDL_ExprFormatStringOffsetTable[] =
{
0,
};

static const NDR_EXPR_DESC  efsr_ExprDesc = 
 {
efsr__MIDL_ExprFormatStringOffsetTable,
efsr__MIDL_ExprFormatString.Format
};

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    54,
    104,
    154,
    192,
    234,
    282,
    330,
    378,
    426,
    474,
    528,
    600,
    654,
    726,
    774,
    834,
    900,
    942,
    990,
    1050
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for efsr.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag167_t;
extern const __midl_frag167_t __midl_frag167;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag166_t;
extern const __midl_frag166_t __midl_frag166;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag164_t;
extern const __midl_frag164_t __midl_frag164;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag163_t;
extern const __midl_frag163_t __midl_frag163;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag162_t;
extern const __midl_frag162_t __midl_frag162;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag161_t;
extern const __midl_frag161_t __midl_frag161;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag160_t;
extern const __midl_frag160_t __midl_frag160;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag159_t;
extern const __midl_frag159_t __midl_frag159;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag158_t;
extern const __midl_frag158_t __midl_frag158;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag157_t;
extern const __midl_frag157_t __midl_frag157;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag154_t;
extern const __midl_frag154_t __midl_frag154;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag151_t;
extern const __midl_frag151_t __midl_frag151;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag138_t;
extern const __midl_frag138_t __midl_frag138;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag136_t;
extern const __midl_frag136_t __midl_frag136;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
NDR64_FORMAT_CHAR
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_VAR frag4;
}
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag122_t;
extern const __midl_frag122_t __midl_frag122;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag120_t;
extern const __midl_frag120_t __midl_frag120;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag74_t;
extern const __midl_frag74_t __midl_frag74;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag28_t;
extern const __midl_frag28_t __midl_frag28;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag24_t;
extern const __midl_frag24_t __midl_frag24;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
NDR64_PIPE_FORMAT
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag3_t;
extern const __midl_frag3_t __midl_frag3;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag167_t __midl_frag167 =
0x5    /* FC64_INT32 */;

static const __midl_frag166_t __midl_frag166 =
{ 
/* Proc20_EfsRpcFlushEfsCache_Downlevel */
    { 
    /* Proc20_EfsRpcFlushEfsCache_Downlevel */      /* procedure Proc20_EfsRpcFlushEfsCache_Downlevel */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag164_t __midl_frag164 =
{ 
/*  */
    { 
    /* *Struct_220_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag38
    },
    { 
    /* *Struct_282_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag74
    },
    { 
    /* *Struct_392_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag96
    }
};

static const __midl_frag163_t __midl_frag163 =
{ 
/* Struct_492_t */
    { 
    /* Struct_492_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_492_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag164,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag162_t __midl_frag162 =
{ 
/* *Struct_492_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag163
};

static const __midl_frag161_t __midl_frag161 =
{ 
/* *Struct_392_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag96
};

static const __midl_frag160_t __midl_frag160 =
{ 
/* *Struct_392_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag96
};

static const __midl_frag159_t __midl_frag159 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag158_t __midl_frag158 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag159
};

static const __midl_frag157_t __midl_frag157 =
{ 
/* Proc19_EfsRpcFileKeyInfoEx_Downlevel */
    { 
    /* Proc19_EfsRpcFileKeyInfoEx_Downlevel */      /* procedure Proc19_EfsRpcFileKeyInfoEx_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag160,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag96,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag162,
        { 
        /* arg_4 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag154_t __midl_frag154 =
{ 
/* **Struct_392_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag160
};

static const __midl_frag151_t __midl_frag151 =
{ 
/* Proc18_EfsRpcFileKeyInfoEx_Downlevel */
    { 
    /* Proc18_EfsRpcFileKeyInfoEx_Downlevel */      /* procedure Proc18_EfsRpcFileKeyInfoEx_Downlevel */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag154,
        { 
        /* arg_2 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag147_t __midl_frag147 =
{ 
/* Proc17_EfsRpcFileKeyInfoEx_Downlevel */
    { 
    /* Proc17_EfsRpcFileKeyInfoEx_Downlevel */      /* procedure Proc17_EfsRpcFileKeyInfoEx_Downlevel */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag154,
        { 
        /* arg_1 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag138_t __midl_frag138 =
{ 
/* Proc16_EfsRpcFileKeyInfoEx_Downlevel */
    { 
    /* Proc16_EfsRpcFileKeyInfoEx_Downlevel */      /* procedure Proc16_EfsRpcFileKeyInfoEx_Downlevel */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag167,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag160,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag159,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag167,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag154,
        { 
        /* arg_5 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag136_t __midl_frag136 =
{ 
/* *Struct_346_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag71
};

static const __midl_frag131_t __midl_frag131 =
{ 
/* Proc15_EfsRpcAddUsersToFileEx_Downlevel */
    { 
    /* Proc15_EfsRpcAddUsersToFileEx_Downlevel */      /* procedure Proc15_EfsRpcAddUsersToFileEx_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag167,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag160,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag159,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag71,
        { 
        /* arg_4 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag129_t __midl_frag129 =
{ 
/* long */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 2048 /* 0x800 */
};

static const __midl_frag128_t __midl_frag128 =
{ 
/* long */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 8 /* 0x8 */
};

static const __midl_frag127_t __midl_frag127 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag124
    }
};

static const __midl_frag126_t __midl_frag126 =
0x10    /* FC64_CHAR */;

static const __midl_frag125_t __midl_frag125 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0xe,    /* OP_PLUS */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag125
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag126
    }
};

static const __midl_frag123_t __midl_frag123 =
{ 
/* Struct_462_t */
    { 
    /* Struct_462_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_462_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag127,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag128
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag129
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag122_t __midl_frag122 =
{ 
/* *Struct_462_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag123
};

static const __midl_frag120_t __midl_frag120 =
{ 
/* Proc14_EfsRpcFileKeyInfoEx_Downlevel */
    { 
    /* Proc14_EfsRpcFileKeyInfoEx_Downlevel */      /* procedure Proc14_EfsRpcFileKeyInfoEx_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag96,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag123,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* Proc13_EfsRpcDuplicateEncryptionInfoFile_Downlevel */
    { 
    /* Proc13_EfsRpcDuplicateEncryptionInfoFile_Downlevel */      /* procedure Proc13_EfsRpcDuplicateEncryptionInfoFile_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag159,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag167,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag167,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag160,
        { 
        /* arg_5 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* arg_6 */      /* parameter arg_6 */
        &__midl_frag167,
        { 
        /* arg_6 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag103_t __midl_frag103 =
{ 
/* Proc12_EfsRpcFileKeyInfo_Downlevel */
    { 
    /* Proc12_EfsRpcFileKeyInfo_Downlevel */      /* procedure Proc12_EfsRpcFileKeyInfo_Downlevel */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag167,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag154,
        { 
        /* arg_3 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag100_t __midl_frag100 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag97
    }
};

static const __midl_frag98_t __midl_frag98 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag98
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag126
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* Struct_392_t */
    { 
    /* Struct_392_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_392_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag100,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag84_t __midl_frag84 =
{ 
/* *Struct_282_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag74
};

static const __midl_frag83_t __midl_frag83 =
{ 
/* Proc10_EfsRpcFileKeyInfoEx_Downlevel */
    { 
    /* Proc10_EfsRpcFileKeyInfoEx_Downlevel */      /* procedure Proc10_EfsRpcFileKeyInfoEx_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag84,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag167,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag167,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/*  */
    { 
    /* **Struct_282_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag72
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/*  */
    { 
    /* *Struct_100_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag42
    },
    { 
    /* *Struct_266_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag75
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag76_t __midl_frag76 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag77
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag126
    }
};

static const __midl_frag75_t __midl_frag75 =
{ 
/* Struct_266_t */
    { 
    /* Struct_266_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_266_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag76
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag74_t __midl_frag74 =
{ 
/* Struct_282_t */
    { 
    /* Struct_282_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_282_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag79,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* **Struct_282_t */
    { 
    /* **Struct_282_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **Struct_282_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag98
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *Struct_282_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag74
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag84
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* Struct_346_t */
    { 
    /* Struct_346_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_346_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag81,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* Proc9_EfsRpcAddUsersToFile_Downlevel */
    { 
    /* Proc9_EfsRpcAddUsersToFile_Downlevel */      /* procedure Proc9_EfsRpcAddUsersToFile_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag71,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag65_t __midl_frag65 =
{ 
/* *Struct_220_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag38
};

static const __midl_frag62_t __midl_frag62 =
{ 
/* Proc8_EfsRpcRemoveUsersFromFile_Downlevel */
    { 
    /* Proc8_EfsRpcRemoveUsersFromFile_Downlevel */      /* procedure Proc8_EfsRpcRemoveUsersFromFile_Downlevel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag38,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* *Struct_220_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag38
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* **Struct_220_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag60
};

static const __midl_frag56_t __midl_frag56 =
{ 
/* Proc7_EfsRpcQueryRecoveryAgents_Downlevel */
    { 
    /* Proc7_EfsRpcQueryRecoveryAgents_Downlevel */      /* procedure Proc7_EfsRpcQueryRecoveryAgents_Downlevel */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag59,
        { 
        /* arg_2 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag54_t __midl_frag54 =
{ 
/*  */
    { 
    /* **Struct_152_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag39
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* *Struct_152_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag41
};

static const __midl_frag52_t __midl_frag52 =
{ 
/*  */
    { 
    /* *Struct_100_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag42
    },
    { 
    /* *Struct_136_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag96
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag159
    }
};

static const __midl_frag44_t __midl_frag44 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x1,    /* FC64_UINT8 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    }
};

static const __midl_frag43_t __midl_frag43 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag44
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag167
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* Struct_100_t */
    { 
    /* Struct_100_t */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_100_t */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag43
    }
};

static const __midl_frag41_t __midl_frag41 =
{ 
/* Struct_152_t */
    { 
    /* Struct_152_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_152_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag52,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* **Struct_152_t */
    { 
    /* **Struct_152_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **Struct_152_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag98
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *Struct_152_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag41
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag53
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* Struct_220_t */
    { 
    /* Struct_220_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_220_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag54,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag28_t __midl_frag28 =
{ 
/* Proc5_EfsRpcDecryptFileSrv_Downlevel */
    { 
    /* Proc5_EfsRpcDecryptFileSrv_Downlevel */      /* procedure Proc5_EfsRpcDecryptFileSrv_Downlevel */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag167,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag24_t __midl_frag24 =
{ 
/* Proc4_EfsRpcEncryptFileSrv_Downlevel */
    { 
    /* Proc4_EfsRpcEncryptFileSrv_Downlevel */      /* procedure Proc4_EfsRpcEncryptFileSrv_Downlevel */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag159,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag22_t __midl_frag22 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag23
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* Proc3_EfsRpcCloseRaw_Downlevel */
    { 
    /* Proc3_EfsRpcCloseRaw_Downlevel */      /* procedure Proc3_EfsRpcCloseRaw_Downlevel */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 8 /* 0x8 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 224 /* 0xe0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag23,
        { 
        /* arg_0 */
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    }
};

static const __midl_frag18_t __midl_frag18 =
{ 
/* pipe_ */
    0xa3,    /* FC64_PIPE */
    (NDR64_UINT8) 64 /* 0x40 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    &__midl_frag126,
    (NDR64_UINT32) 1 /* 0x1 */,
    (NDR64_UINT32) 1 /* 0x1 */
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* *pipe_ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag18
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag15_t __midl_frag15 =
{ 
/* Proc2_EfsRpcWriteFileRaw_Downlevel */
    { 
    /* Proc2_EfsRpcWriteFileRaw_Downlevel */      /* procedure Proc2_EfsRpcWriteFileRaw_Downlevel */
        (NDR64_UINT32) 17317952 /* 0x1084040 */,    /* explicit handle */ /* IsIntrepreted, pipe, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag16,
        { 
        /* arg_0 */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag18,
        { 
        /* arg_1 */
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* pipe, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* *pipe_ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag18
};

static const __midl_frag9_t __midl_frag9 =
{ 
/* Proc1_EfsRpcReadFileRaw_Downlevel */
    { 
    /* Proc1_EfsRpcReadFileRaw_Downlevel */      /* procedure Proc1_EfsRpcReadFileRaw_Downlevel */
        (NDR64_UINT32) 17317952 /* 0x1084040 */,    /* explicit handle */ /* IsIntrepreted, pipe, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag16,
        { 
        /* arg_0 */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag18,
        { 
        /* arg_1 */
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* pipe, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag3_t __midl_frag3 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Proc0_EfsRpcOpenFileRaw_Downlevel */
    { 
    /* Proc0_EfsRpcOpenFileRaw_Downlevel */      /* procedure Proc0_EfsRpcOpenFileRaw_Downlevel */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag4,
        { 
        /* arg_1 */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag159,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag167,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag167,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef DefaultIfName_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag9,
    &__midl_frag15,
    &__midl_frag21,
    &__midl_frag24,
    &__midl_frag28,
    &__midl_frag56,
    &__midl_frag56,
    &__midl_frag62,
    &__midl_frag67,
    &__midl_frag83,
    &__midl_frag110,
    &__midl_frag103,
    &__midl_frag110,
    &__midl_frag120,
    &__midl_frag131,
    &__midl_frag138,
    &__midl_frag147,
    &__midl_frag151,
    &__midl_frag157,
    &__midl_frag166
    };


static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &DefaultIfName__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    efsr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& DefaultIfName_ProxyInfo,   /* proxy/server info */
    &efsr_ExprDesc
    };

static const MIDL_SYNTAX_INFO DefaultIfName_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    efsr__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    efsr__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) DefaultIfName_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO DefaultIfName_ProxyInfo =
    {
    &DefaultIfName_StubDesc,
    efsr__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)DefaultIfName_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

