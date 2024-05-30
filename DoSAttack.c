#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    while(true) {
        struct sockaddr_in target;
        
        int mySocket = socket(AF_INET, SOCK_STREAM, 0);

        target.sin_family = AF_INET;
        target.sin_port = htons(21);
        target.sin_addr.s_addr = inet_addr(argv[1]);

        int connection = connect(mySocket, (struct sockaddr *)&target, sizeof target);
    }
}
