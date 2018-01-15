////////////////////////////////////////////////////////////////////////////////
/// 
/// @par ģ����
/// �����������Ͷ���
/// @par ����ļ�
/// ϵͳͷ�ļ�
/// @par ������ϸ����
/// �����������Ͷ��塣����Windowsƽ̨��Linuxƽ̨
/// @par ���̰߳�ȫ��
/// -
/// @par �쳣ʱ��ȫ��
/// -
/// @note
/// -
/// 
/// @file         commTypes.h
/// @brief        �����������Ͷ���
/// @author       Li.xl
/// @version      1.0
/// @date         2012.06.02
/// @todo         -
/// 
////////////////////////////////////////////////////////////////////////////////
#ifndef __COMM_LTYPES_H__
#define __COMM_LTYPES_H__

/// Windows��Linuxͨ�ñ�׼Cͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <locale.h>
#include <wchar.h>
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <list>
#include <map>
#include <sstream>
#include <iterator>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <algorithm>

using namespace std;

/// Windowsͷ�ļ�
#ifdef WIN32

    /// ����WIN32_LEAN_AND_MEAN�꣬���ε�MFC��winsock.h�ȣ��ӿ���룬�Ż�Ӧ�ó���
    #define WIN32_LEAN_AND_MEAN
    #include <winsock2.h>
	#include <windows.h>
	#include <shellapi.h>
	#include <MSWSock.h>
    #include <io.h>
    #include <process.h>
	#include <ws2tcpip.h>
	#include <direct.h>
	/// for timeSetEvent()
	#include <Mmsystem.h>
	/// libcurl ʹ�õĿ�
	#pragma comment(lib, "ws2_32.lib")
	#pragma comment(lib, "wldap32.lib")
	/// AcceptEx, TransmitFile, etc.
	#pragma comment(lib, "mswsock")
	/// UrlUnescape.
	#pragma comment(lib, "shlwapi")
	#pragma comment(lib, "winmm.lib")

/// Linuxͷ�ļ�
#else

    #include <pthread.h>
    #include <unistd.h>
    #include <stdint.h>
    #include <syscall.h>
    #include <semaphore.h>
    #include <dirent.h>
    #include <iconv.h>
    #include <netdb.h>
    #include <syslog.h>
    #include <termios.h>
    #include <mntent.h>
    #include <arpa/inet.h>
    #include <asm/errno.h>
    #include <asm/unistd.h>
    #include <net/if.h>
    #include <netinet/in.h>
    #include <netinet/tcp.h>
    #include <net/if_arp.h>
    #include <linux/fb.h>
    #include <linux/errno.h>
    #include <linux/ioctl.h>
    #include <linux/hdreg.h>
    #include <linux/kd.h>
    #include <linux/kernel.h>
    #include <linux/keyboard.h>
    #include <linux/types.h>
    #include <linux/vt.h>
    #include <sys/param.h>
    #include <sys/resource.h>
    #include <sys/socket.h>
    #include <sys/sysinfo.h>
    #include <sys/vfs.h>
    #include <sys/statfs.h>
    #include <sys/time.h>
    #include <sys/file.h> 
    #include <sys/ioctl.h>
    #include <sys/mman.h>
    #include <sys/mount.h>
    #include <sys/types.h>
    #include <sys/epoll.h>
    #include <sys/socket.h>
    #include <sys/sendfile.h>
	#include <sys/wait.h>

#endif // WIN32


/// BOOL��ֵ
#undef	TRUE
#undef	FALSE
#define	TRUE		        1
#define	FALSE		        0

/// NULL����
#undef	NULL
#ifdef __cplusplus
#define NULL		        0
#else
#define NULL		        ((void *)0)
#endif

#ifdef _MSC_VER
typedef unsigned __int8		uint8;
typedef __int8				sint8;
typedef unsigned __int16	uint16;
typedef __int16				sint16;
typedef unsigned __int32	uint32;
typedef __int32				sint32;
typedef __int64				sint64;
typedef unsigned __int64	uint64;
#else // _MSC_VER
typedef unsigned char		uint8;
typedef signed char			sint8;
typedef unsigned short		uint16;
typedef signed short		sint16;
typedef unsigned int		uint32;
typedef signed int			sint32;
typedef long long			sint64;
typedef unsigned long long	uint64;
#endif // _MSC_VER

typedef char				char8;
typedef float				float32;
typedef double				float64;

/// �����Ͷ���
typedef int					BOOL;

#ifndef WORD
	typedef unsigned short  WORD;
#endif
#ifndef BYTE
	typedef unsigned char   BYTE;
#endif
#ifndef DWORD
	typedef unsigned long   DWORD;
#endif
#ifndef UINT
	typedef unsigned int    UINT;
#endif
#ifndef ULONG
	typedef unsigned long   ULONG;
#endif
#ifndef UCHAR
	typedef unsigned char   UCHAR;
#endif
#ifndef DOUBLE
	typedef double          DOUBLE;
#endif
#ifndef DATE
	typedef double          DATE;
#endif
#ifndef BOOL
	typedef int             BOOL;
#endif
#ifndef COLORREF
	typedef DWORD           COLORREF;
#endif


#ifndef WIN32
#ifndef WCHAR
	typedef WORD WCHAR;
#endif
#endif


#ifndef HSOCKET
#if defined WIN32
	typedef SOCKET			HSOCKET;
#else ///linux
	typedef int				HSOCKET;
#endif /// 
#endif /// HSOCKET


/// vector����
typedef vector<void *>      CPublicPtrArray;
typedef vector<string>      CPublicStringArray;
typedef vector<int>         CPublicIntArray;
typedef vector<ULONG>       CPublicULongArray;

/// list����
typedef list<void*>         CPublicPtrList;

/// map����
typedef map<int,void *>			CPublicMapIntToPtr;
typedef map<long,void *>		CPublicMapLongToPtr;
typedef map<ULONG,void *>		CPublicMapULongToPtr;
typedef map<string,void *>		CPublicMapStringToPtr;
typedef map<int, string>		CPublicMapIntToStr;
typedef map<string, string>		CPublicMapStringToString;
typedef map<string, int>		CPublicMapStrToInt;

/// Unicode�ַ���
#ifndef UnicodeString
typedef vector<unsigned short>	UnicodeString;
#endif 

/// ����ƽ̨�²�ͬAPI�����Ķ���
#if defined WIN32
    #if defined(_MSC_VER) && _MSC_VER > 1310 && !defined (_WIN32_WCE)
        #define swprintf        swprintf_s
        #define snprintf        sprintf_s
        #define strncasecmp     _memicmp
    #else
        #define swprintf        _snwprintf
        #define snprintf        _snprintf
    #endif
#endif

#endif // __COMM_LTYPES_H__
