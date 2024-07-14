#include <stdio.h>
#include <stdlib.h>

int main(void){

    char * word = NULL;
    word = malloc(sizeof(char) * 24);
    
    if(word){
        printf("Memory was successfully allocated.\n");
        free(word);
        return 0;
    } else {
        printf("Error: Memory not allocated\n");
        return 1;
    }
}