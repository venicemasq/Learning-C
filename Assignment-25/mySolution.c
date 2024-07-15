#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h> //Header for file mods bit
#include <unistd.h>


int main(void){
    int fileDescriptor = open("./example", O_WRONLY | O_CREAT, S_IRWXU);

    if(fileDescriptor < 0){
        printf("Error occured: File not created.\n");
        return -1;
    } else {
        printf("File created.\n");
    }

    ssize_t result = write(fileDescriptor, "Hello\n", 6);
    if(result != 6){
        printf("Error: Nothing was written in the file.\n");
        return -1;
    } else {
        printf("There were written %ld bytes in the file.\n", result);
    }


    if(close(fileDescriptor) != 0){
        printf("Error: problems to close the file.\n");
        return -1;
    }

    return 0;
}