#include <stdio.h>

int main(void){
    int numbers[10];
    char letter = 'Y';
    double result = 0;
    char line[1000];
    
    int i = 0;
    while(letter == 'Y' && i < 10){
        printf("Enter a test score: ");
        scanf("%d", &numbers[i]);
        int garbage2 = getchar();
        
        result += numbers[i];

        printf("Would you like to continue? Y/N ");
        scanf("%c", &letter);
        int garbage = getchar();
        i++;
    }

    result /= i;
    printf("%.2lf is the average.\n", result);


    return 0;

}