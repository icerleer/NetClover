////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// @par ģ����
/// �������ļ�ͷ
/// @par ����ļ�
/// ���ô��ļ�ͷ�������ļ�
/// @par ������ϸ����
/// @par ���̰߳�ȫ��
/// [��˵��]
/// @par �쳣ʱ��ȫ��
/// [��˵��]
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
