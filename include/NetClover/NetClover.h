////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// @par 模块名
/// 导出类文件头
/// @par 相关文件
/// 引用此文件头的所有文件
/// @par 功能详细描述
/// @par 多线程安全性
/// [否，说明]
/// @par 异常时安全性
/// [否，说明]
/// @note         -
/// @file         NetClover.h
/// @brief        -
/// @author       Li.xl
/// @version      1.0
/// @date         2015/11/19
/// @todo         -
/// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __CLOVER_AIDE_CNETCLOBER_H_H__
#define __CLOVER_AIDE_CNETCLOBER_H_H__

/// Windows 导出函数编译
#ifdef WIN32
#ifdef	NETCLOVER_EXPORTS
#define NETCLOVER_API __declspec(dllexport)
#else
#define NETCLOVER_API __declspec(dllimport)
#endif /// NETCLOVER_API
#else
#define NETCLOVER_API
#endif

class NETCLOVER_API CNetClover
{
public:
	CNetClover();
	~CNetClover();
	/// 测试
	void e_Test();
};

#endif /// __CLOVER_AIDE_CNETCLOBER_H_H__