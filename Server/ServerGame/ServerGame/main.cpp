#include <iostream>
#ifdef _WIN32
#include <WinSock2.h>
#else
#include <sys/socket.h>
#include/netinet/in.h>
#include <netdb.h>
typedef int SOCKET;
#define INVALID_SOCKET  ((SOCKET)-1)
#define closesocket(fd)    close(fd)
#endif

int main()
{
	SOCKET fd;
#ifdef _WIN32
	WSADATA wsd;
	if (WSAStartup(0x101, &wsd)) return 1;
#endif

	fd = socket(AF_INET, SOCK_STREAM, 0);


}