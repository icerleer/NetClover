///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// @par ģ����
/// �������ģ�鶨���ļ�
/// @par ����ļ�
/// ���ô��ļ�ͷ�������ļ�
/// @par ������ϸ����
/// @par ���̰߳�ȫ��
/// [��˵��]
/// @par �쳣ʱ��ȫ��
/// [��˵��]
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

/// ��С�������ݻ������С Sizeof(UINT)
#define MIN_NET_BUFFER_SIZE		4
/// ����������ݻ������С 1024 * 1024 * 4 (64K)
#define MAX_NET_BUFFER_SIZE		4194304
/// ����������ݰ���Ч���ݴ�С MAX_NET_BUFFER_SIZE - MIN_NET_BUFFER_SIZE
#define MAX_PAL_BUFFER_SIZE		4194300

/// ���乤������
enum _eJobDataType
{
	JDT_None = 0,					///< �޹�������
	JDT_StringData,					///< �ַ�������
};

/// ���紫������
enum _eNetTransfType
{
	NTT_None		= 0,	///< δ֪
	NTT_TCPData		= 1,	///< TCP����
	NTT_UDPData		= 2,	///< UDP����
};

/// ��������ͷ�ṹ��
typedef struct _tBufferHead
{
	int				nTotalLen;		///< �����ܳ���(��������ͷ���������ݳ��ȣ������������ֶα���)
}T_BufferHead, *LP_BufferHead;


#endif	/// __PAINET_NETCORE_NETCORE_DEF_H_H__
