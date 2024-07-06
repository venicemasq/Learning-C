#include <stdio.h>

int main(void){
    int n = 0;
    printf("Enter a number between 1 and 500: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 100){
        printf("Your number is between 1 and 100!\n");
    } else if(n >= 101 && n <= 200){
        printf("Your number is between 101 and 200!\n");
    } else if(n >= 201 && n <= 300){
        printf("Your number is between 201 and 300!\n");
    } else if(n >= 301 && n <= 400){
        printf("Your number is between 301 and 400!\n");
    } else if(n >= 401 && n <= 500){
        printf("Your number is between 401 and 500!\n");
    } else {
        printf("Your number was not in any of our ranges.\n");
    }

    return 0;
}