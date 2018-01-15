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

#include "common/CommTypes.h"
#include <NetClover/NetClover.h>
#include <libcurl/curl.h>



CNetClover::CNetClover()
{
}

CNetClover::~CNetClover()
{
}


void CNetClover::e_Test()
{
	CURL *curl;
	CURLcode res;
 
	curl = curl_easy_init();
	if(NULL != curl) 
	{
		curl_easy_setopt(curl, CURLOPT_URL, "http://2345.com/?kduba");
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}
