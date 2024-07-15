#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h> //Header for file mods bit
#include <unistd.h>


int main(void){
    int fileDescriptor = open("./example.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if(fileDescriptor < 0){
        printf("Error occured: File not created.\n");
        return -1;
    } else {
        printf("File created.\n");
        return 0;
    }
}