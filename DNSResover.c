#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("How to use: ./dnsresolver");
        return 0;
    }
 
    struct hostent *host = gethostbyname(argv[1]);
    
    char *ip = inet_ntoa(*((struct in_addr *) host->h_addr));

    printf("%s has address %s", argv[1], ip);


}
