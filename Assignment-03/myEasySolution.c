#include <stdio.h>

int main(void){
    char name[21];
    char surname[21];

    printf("Enter your first name: ");
    scanf("%20s", name);
    
    printf("Enter yor second name: ");
    scanf("%20s", surname);

    printf("Hello %s %s\n", name, surname);

    return 0;
}