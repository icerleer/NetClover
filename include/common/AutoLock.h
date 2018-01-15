////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// @par ģ����
/// <�����Զ���ģ��>
/// @par ����ļ�
/// CommTypes.h
/// @par ������ϸ����
/// <�����Ǳ����ܵ���ϸ���������ݳ���120������ַ���Ҫ�ӷ�б��N���н���һ������>
/// @par ���̰߳�ȫ��
/// <��/��>[��˵��]
/// @par �쳣ʱ��ȫ��
/// <��/��>[��˵��]
/// @note         -
/// 
/// @file         AutoLock.h
/// @brief        <ģ�鹦�ܼ���>
/// @author       Li.xl
/// @version      1.0
/// @date         2011/05/25
/// @todo         <����Ҫ��������>
/// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __VAPP_LIGHTAUTOLOCK_H__
#define __VAPP_LIGHTAUTOLOCK_H__

#include "CommTypes.h"

////////////////////////////////////////////////////////////////////////////////
/// 
/// @par 	�쳣��
/// <�쳣��˵��>
/// @par 	��ע
/// <Ϊ�˲������첿�̷߳������ݣ����̼߳���>
/// @par 	�����÷�
/// @code
/// <�����ǵ����÷���ʾ������>
/// @endcode
/// 
/// @brief	
/// @author	Li.xl
/// 
////////////////////////////////////////////////////////////////////////////////
#ifndef WIN32
/// linux
class CLightCritSec 
{
	/// Linux����װ
	CLightCritSec(const CLightCritSec &refCritSec);
	CLightCritSec &operator=(const CLightCritSec &refCritSec);

private:
	pthread_mutexattr_t m_attr;
	pthread_mutex_t m_mutex;
public:
	CLightCritSec() 
	{
		pthread_mutexattr_init(&m_attr);
		//pthread_mutexattr_settype(&m_attr, PTHREAD_MUTEX_RECURSIVE_NP);
		pthread_mutexattr_settype(&m_attr, PTHREAD_MUTEX_TIMED_NP);
		//pthread_mutexattr_settype(&m_attr, PTHREAD_MUTEX_ERRORCHECK_NP);
		//pthread_mutexattr_settype(&m_attr, PTHREAD_MUTEX_ADAPTIVE_NP);
		pthread_mutex_init(&m_mutex, &m_attr);
	};

	~CLightCritSec()
	{
		pthread_mutex_destroy(&m_mutex);
	};

	void e_Lock()
	{
		pthread_mutex_lock(&m_mutex);
	};

	void e_Unlock() 
	{
		pthread_mutex_unlock(&m_mutex);
	};
};

#else 

class CLightCritSec 
{
	/// 
	/// @par ���� 
	/// ���ع��캯��
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	CLightCritSec(const CLightCritSec &refCritSec);

	/// 
	/// @par ���� 
	/// ���صȺŲ�����
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	CLightCritSec &operator=(const CLightCritSec &refCritSec);

private:
	CRITICAL_SECTION m_CritSec;
public:

	CLightCritSec()
	{
		InitializeCriticalSectionAndSpinCount(&m_CritSec, 10000);
		/// InitializeCriticalSection(&m_CritSec);
	};

	~CLightCritSec()
	{
		DeleteCriticalSection(&m_CritSec);
	};

	/// 
	/// @par ���� 
	/// ����
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	void e_Lock()
	{
		EnterCriticalSection(&m_CritSec);
	};

	/// 
	/// @par ���� 
	/// ����
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	void e_Unlock()
	{
		LeaveCriticalSection(&m_CritSec);
	};
};
#endif

////////////////////////////////////////////////////////////////////////////////
/// 
/// @par 	�쳣��
/// <�쳣��˵��>
/// @par 	��ע
/// <����ҵ��ʵ����>
/// @par 	�����÷�
/// @code
/// <�����ǵ����÷���ʾ������>
/// @endcode
/// 
/// @brief	
/// @author	Li.xl
/// 
////////////////////////////////////////////////////////////////////////////////
class CAutoLock 
{
	/// 
	/// @par ���� 
	/// ���ع��캯��
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	CAutoLock(const CAutoLock &refAutoLock);

	/// 
	/// @par ���� 
	/// ���صȺŲ�����
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	CAutoLock &operator = (const CAutoLock &refAutoLock);

protected:
	/// ������ס���߳�
	CLightCritSec* m_pLock;
public:

	/// 
	/// @par ���� 
	/// ���캯��
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	CAutoLock()	
	{
		m_pLock = NULL;
	};

	/// 
	/// @par ���� 
	/// ���캯������
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// [in]		plock			��ǰ�����Ķ���
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	CAutoLock(CLightCritSec* plock)
	{
		m_pLock = plock;
		if(NULL != m_pLock)
		{
			m_pLock->e_Lock();
		}
	};

	/// 
	/// @par ���� 
	/// ��������,������ǰ����
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// 
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	~CAutoLock() 
	{
		if(NULL != m_pLock)
		{
			m_pLock->e_Unlock();
		}
	};

	/// 
	/// @par ���� 
	/// ��ס��ǰ����������
	/// @param 
	///	[in,out]	<������>		<����˵��>
	/// [in]		plock			��ǰ�����Ķ���
	/// @return 		-
	/// @note 
	/// <����˵��>
	/// @par ʾ����
	/// @code 
	/// <���ñ�������ʾ������>
	/// @endcode 
	/// @see		<�μ�����> 
	/// @deprecated	<��ʱ˵��> 
	/// 
	void e_Lock(CLightCritSec* plock) 
	{
		m_pLock = plock;
		if(NULL != m_pLock)
		{
			m_pLock->e_Lock();
		}
	};
};
#endif/// __VAPP_LIGHTAUTOLOCK_H__