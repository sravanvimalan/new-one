//standard  libraries
# include<stdio.h>
# include<stdlib.h>
#include <unistd.h> //for close server_socket
//socket api libraries
 
# include<sys/socket.h>
# include<sys/types.h>

//for network

# include<netinet/in.h>

//main function

int main(){

	char server_message[256] = "you have reached the server";

	int server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);

	//define the server address

	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002);
	server_address.sin_addr.s_addr = INADDR_ANY;

	//here we need to bind the port and address
	 bind(server_socket,(struct sockaddr*) &server_address, sizeof(server_address));

	 //listen function explain the no of listers in the network which helps in the traffic condition

	 listen(server_socket, 5);

	 //for accept the connection b/w them using accept function

	 int client_socket;
	 client_socket = accept(server_socket, NULL, NULL);

	 //for sending the message

	 send(client_socket, server_message, sizeof(server_message),0);

	 //close the socket

	 close(server_socket);

	return 0;
}
