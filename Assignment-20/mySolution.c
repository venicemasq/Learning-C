#include <stdio.h>

struct myStruct
{
    int id;
    char letter;
    float money;
};

int main(void){

    struct myStruct example;
    example.id = 27;
    example.letter = 'V';
    example.money = 0.0;
    
    printf("This is the int: %d, this is the %c: , this is the float: %.2lf\n", example.id, example.letter, example.money);

    return 0;
}