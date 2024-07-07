#include <stdio.h>

int main(void){
    int number = 50;
    int *ptr = &number;

    printf("%p\n", ptr);

    return 0;
}