#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>

#define PORT 8081

#Define BUFFER_SIZE 1024

int main (){
    int sock;
    struct sockaddr_in serv_addr ;
    char buffer [BUFFER_SIZE];
  
    \\create socket
    sock = socket(AF_INET , SOCK_STREAM ,0);


#configure server address
   serv_addr . sin_family = AF_INET;
   serv_addr. sin_port = htons(port);



\\convert IP address(127.0.0.1 for localhost)



\\connect to server






\\communication loop

clock(sock);
return 0;
}