#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if(argc != 2){
        printf("How to use: ./pingscan 192.168.0\n");
        return 0; 
    }

    int i;
    char command[100];

    for(i = 225; i < 235; i++){
        sprintf(command, "ping -c 1 %s.%i | grep '64 bytes' | cut -d ' ' -f 4 | sed 's/:/ /'", argv[1], i);
        system(command);
    }
}
