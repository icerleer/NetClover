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

#ifndef __CLOVER_AIDE_CNETCLOBER_H_H__
#define __CLOVER_AIDE_CNETCLOBER_H_H__

/// Windows ������������
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
	/// ����
	void e_Test();
};

#endif /// __CLOVER_AIDE_CNETCLOBER_H_H__