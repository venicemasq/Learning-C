#include <stdio.h>
#include <stdlib.h>

int main(void){

    char* name;
    char* surname;

    printf("Enter your first name: ");
    scanf("%ms", &name);

    printf("Enter your second name: ");
    scanf("%ms", &surname);

    printf("%s %s\n", name, surname);

    free(name);
    free(surname);

    return 0;
}