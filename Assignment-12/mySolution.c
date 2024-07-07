#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int times = 0;
    printf("How many time you want flip a coin ? ");
    scanf("%d", &times);

    int head = 0;
    int tail = 0;

    for(int i = 0; i < times; i++){
        int result = rand() % 2;
        if(result) {
            tail++;
        } else {
            head++;
        }
    }

    printf("%d Heads\n", head);
    printf("%d Tails\n", tail);

    return 0;
}