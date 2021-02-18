#include <stdio.h>
#include <winsock2.h>
int main()
{
    WSADATA wsaData;
    int ll=WSAStartup(MAKEWORD(2,2), &wsaData);
    SOCKET uu=socket( AF_INET , SOCK_STREAM , IPPROTO_TCP ),kk=socket( AF_INET , SOCK_DGRAM , IPPROTO_UDP );
    printf("%d\n%llu\n%llu",ll,uu,kk);
    closesocket(uu);
    closesocket(kk);
    WSACleanup();
}