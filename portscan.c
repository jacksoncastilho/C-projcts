#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]){
    int port, tcp_socket, connection;
    int portEnd = 65535;
    char *dest;
    dest = argv[1];

    struct sockaddr_in target;
        
    for(port=0; port < portEnd; port++){
        tcp_socket = socket(AF_INET, SOCK_STREAM, 0);
        
        target.sin_family = AF_INET;
        target.sin_port = htons(port);
        target.sin_addr.s_addr = inet_addr(dest);

        connection = connect(tcp_socket, (struct sockaddr *)&target, sizeof target);
        
        if(connection == 0){
            printf("%i - Open\n", port);         
        }
    
        close(tcp_socket);
    }
   
}
