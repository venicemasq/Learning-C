#include <stdio.h>

int main(void){
    const int size = 7;
    char triangle[size];
    char ascii = '*';
    int count = 0;

    for(int i = 0; i < size; i++){
        for(int y = 0; y < i + 1; y++){
            putchar(ascii);
        }
        putchar('\n');
    }

    return 0;
}