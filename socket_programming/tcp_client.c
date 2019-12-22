//include some standard i/o libraries
# include<stdio.h>
# include<stdlib.h>
#include <unistd.h> //for close network_socket
//for api and create sockets we need these libraries

# include<sys/types.h>
# include<sys/socket.h>


//for storing address like information we need this header file

# include<netinet/in.h>

//create main function

int main()
{
        //create socket

        int network_socket;
        network_socket = socket(AF_INET, SOCK_STREAM, 0);


        //AF_INET : denotes the internet
        //SOCKSTREAM : denotes we use TCP protocol
        //'0' : denotes the default protocol TCP


        //now socket is created, then we need to connect to the other end
        //so create connection

   //for connecting we need to specify the address that's why need 'include net/inet.h

        struct sockaddr_in server_address;
        server_address.sin_family = AF_INET; //specify the what type of address
        server_address.sin_port=htons(9002) ;

                //'htons' help to convert the port no to byte order 
                //structure accept only the port no in understandable format
                //there are bunch of port numbers.
        server_address.sin_addr.s_addr = INADDR_ANY;

        //for connection 
        int connection_status;
        connection_status = connect(network_socket, (struct sockaddr*) &server_address, sizeof(server_address));

        if(connection_status == -1)
            printf("connection failed to connect to remote socket\n");

        char server_response[256];

        //recieve the data from  the server

        recv(network_socket, &server_response, sizeof(server_response), 0);

        //then close the socket

        close(network_socket);
}

