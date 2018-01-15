///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// @par 模块名
/// 网络核心模块定义文件
/// @par 相关文件
/// 引用此文件头的所有文件
/// @par 功能详细描述
/// @par 多线程安全性
/// [否，说明]
/// @par 异常时安全性
/// [否，说明]
/// @note         -
/// @file         NetCoreDef.h
/// @brief        -
/// @author       Li.xl
/// @version      1.0
/// @date         2013/12/20
/// @todo         -
/// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __PAINET_NETCORE_NETCORE_DEF_H_H__
#define __PAINET_NETCORE_NETCORE_DEF_H_H__

/// 最小网络数据缓冲包大小 Sizeof(UINT)
#define MIN_NET_BUFFER_SIZE		4
/// 最大网络数据缓冲包大小 1024 * 1024 * 4 (64K)
#define MAX_NET_BUFFER_SIZE		4194304
/// 最大网络数据包有效数据大小 MAX_NET_BUFFER_SIZE - MIN_NET_BUFFER_SIZE
#define MAX_PAL_BUFFER_SIZE		4194300

/// 传输工作类型
enum _eJobDataType
{
	JDT_None = 0,					///< 无工作类型
	JDT_StringData,					///< 字符串类型
};

/// 网络传输类型
enum _eNetTransfType
{
	NTT_None		= 0,	///< 未知
	NTT_TCPData		= 1,	///< TCP数据
	NTT_UDPData		= 2,	///< UDP数据
};

/// 网络数据头结构体
typedef struct _tBufferHead
{
	int				nTotalLen;		///< 数据总长度(包含数据头和数据内容长度，不包含描述字段本身)
}T_BufferHead, *LP_BufferHead;


#endif	/// __PAINET_NETCORE_NETCORE_DEF_H_H__
