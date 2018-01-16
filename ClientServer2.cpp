#include "ClientServer2.h"

using namespace std;

void main()
{
	long WORKS;
	WSAData SockStuff;
	WORD DL;

	DL = MAKEWORD(2,1);

	WORKS=WSAStartup(DL, &SockStuff);

	SOCKADDR_IN ADDRESS;
	INT AddressSize = sizeof(ADDRESS);

	//create sockets
	SOCKET LISTEN;
	SOCKET CONNECTION;

	CONNECTION = socket(AF_INET, SOCK_STREAM, NULL);
	ADDRESS.sin_addr.s_addr = inet_addr("127.0.0.1");
	ADDRESS.sin_family = AF_INET;
	ADDRESS.sin_port = htons(444);

	LISTEN = socket(AF_INET, SOCK_STREAM, NULL);
	bind(LISTEN, (SOCKADDR*)&ADDRESS, sizeof(ADDRESS));
	listen(LISTEN, SOMAXCONN);

	for(;;)
	{
		cout << "SERVER: Waiting for incomming Connection Request..." << endl;

		if(CONNECTION = accept(LISTEN, (SOCKADDR*)&ADDRESS, &AddressSize))
		{
			cout << "Connection has been made!" <<endl;

			WORKS = send(CONNECTION, "You have been Connected!", 46, NULL);
		} //end if
	} //end for
} //end main