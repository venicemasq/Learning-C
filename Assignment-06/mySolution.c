#include <stdio.h>

int main(void){

    int num = 0;
    int den = 0;

    printf("Enter a numerator: ");
    scanf("%d", &num);
    printf("Enter a denominator: ");
    scanf("%d", &den);

    if(num % den == 0){
        printf("There isn't a reminder\n");
    } else {
        printf("There is a reminder\n");
    }


    return 0;
}