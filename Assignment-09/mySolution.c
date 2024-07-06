#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Bad usage of this program.\nCall this program with your first and second name as arguments.\n");
    } else {
        printf("Hello, %s %s.\n", argv[1], argv[2]);
    }
}