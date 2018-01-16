#include "ClientServer1.h"

using namespace std;

void main()
{
	long WORKS;
	WSAData SockStuff;
	WORD DL;

	DL = MAKEWORD(2,1);

	WORKS=WSAStartup(DL, &SockStuff);

	string RESPONSE;
	string CONVERTER;
	char MESSAGE[200];

	SOCKADDR_IN ADDRESS;

	SOCKET socks;
	socks = socket(AF_INET, SOCK_STREAM, NULL);

	ADDRESS.sin_addr.s_addr = inet_addr("127.0.0.1");
	ADDRESS.sin_family = AF_INET;
	ADDRESS.sin_port = htons(444);

	cout << "CLIENT: Would you like to connect to the server? (Y/N) " << endl;
	cin >> RESPONSE;

	RESPONSE[0] = tolower(RESPONSE[0]);

	if(RESPONSE == "n")
	{
		cout << "OK, Exiting Program." << endl;
	}
	else if(RESPONSE == "y")
	{
		connect(socks, (SOCKADDR*)&ADDRESS, sizeof(ADDRESS));

		WORKS = recv(socks, MESSAGE, sizeof(MESSAGE), NULL);

		CONVERTER = MESSAGE;

		cout << "Message From the SERVER: " << endl << CONVERTER << endl;
	}
	else
	{
		cout << "That was an Invalid Response!" << endl;
	} //end if

	system("PAUSE");
	exit(1);
}//end main