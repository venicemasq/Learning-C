struct employee{
    char name[20];
    char surname[20];
    int id;
    int ssn;
    char title[20];
};


struct squad{
    struct employee employees;
};


#include <stdio.h>

#define N_EMPLOYEE 2

int main(void){

    struct employee team[N_EMPLOYEE];
    

    for(int i = 0; i < N_EMPLOYEE; i++){
        printf("Enter the employee's first name: ");
        scanf("%s", team[i].name);
        printf("Enter the employee's last name: ");
        scanf("%s", team[i].surname);
        printf("Enter the employee's ID number: ");
        scanf("%d", &team[i].id);
        printf("Enter the last four digits of the employee's SSN: ");
        scanf("%d", &team[i].ssn);
        printf("Enter the employee's job title (do not include the word 'Engineer'): ");
        scanf("%s", team[i].title);
        printf("\n\n");
    }
    


    for(int i = 0; i < N_EMPLOYEE; i++){
        printf("Employee information for %s %s:\n", team[i].name, team[i].surname);
        printf("ID: %d\n", team[i].id);
        printf("SSN: %d\n", team[i].ssn);
        printf("Title: %s Engineer\n\n", team[i].title);
    }

    return 0;
}
