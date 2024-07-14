struct example {
    int integer;
};

#include <stdio.h>

int main(void){

    struct example * ptr;
    struct example instance;
    ptr = &instance;

    instance.integer = 10;
    printf("Value assigned with dot notation: %d\n", instance.integer);

    (*ptr).integer = 20;
    printf("Value assigned with dot operator and dereferencing pointer: %d\n", (*ptr).integer);

    ptr->integer = 30;
    printf("Value assigned with arrow operator: %d\n", ptr->integer);

    return 0;
}