#include <stdio.h>

int main(void){
    int input = 0;
    printf("Enter the amount of seconds: ");
    scanf("%d", &input);

    int remain = 0;
    int hours = input / 3600;
    remain = input - hours * 3600;

    int minutes = remain / 60;
    remain -= minutes * 60;

    int seconds = remain;

    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", input, hours, minutes, seconds);

    return 0;
}