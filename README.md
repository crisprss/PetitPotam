# PetitPotam

## description
替代PrintBug用于本地提权的新方式，主要利用MS-EFSR协议中的接口函数

借鉴了Potitpotam中对于EFSR协议的利用,实现了本地提权的一系列方式 

Drawing on the use of the EFSR protocol in Potitpotam, a series of local rights escalation methods have been realized

## Use
Petitpotam提供了如下几种接口函数用于本地提权:
```
1.EfsRpcOpenFileRaw (fixed with CVE-2021-36942)
2: EfsRpcEncryptFileSrv_Downlevel
3: EfsRpcDecryptFileSrv_Downlevel
4: EfsRpcQueryUsersOnFile_Downlevel
5: EfsRpcQueryRecoveryAgents_Downlevel
6: EfsRpcRemoveUsersFromFile_Downlevel
7: EfsRpcAddUsersToFile_Downlevel
```
Usage:Petitpotam -m \<EFS-API-to-use\> -c <CMD> //选择对应的索引即可

## notice
管道模拟RPC安全上下文需要`SecurityImpersonation`权限，因此适用于Service服务用户提权至SYSTEM用户

## example
![](https://md.buptmerak.cn/uploads/upload_c446b828424b36167d5e97618706cc48.png)
  
![](https://md.buptmerak.cn/uploads/upload_4164077b60e514558e37d4e669f594dd.png)
