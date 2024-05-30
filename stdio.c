#include <stdio.h>

int main(void) {
    char ip[16];
    int port = 80;

    printf("Enter the IP: ");
    scanf("%15s", ip); 

    printf("Socket: %s:%i", ip, port); 
    return 0;
}
