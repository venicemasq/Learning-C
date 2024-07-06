#include <stdio.h>
#include <math.h>


int main(void){
    double a, b, c = 0.0;

    printf("Enter the value of variable 'A': ");
    scanf("%lf", &a);
    printf("Enter the value of variable 'B': ");
    scanf("%lf", &b);
    printf("Enter the value of variable 'C': ");
    scanf("%lf", &c);

    double numWithPlus = (b * -1) + sqrt(pow(b, 2) + (-4 * a * c));
    double numWithMenus = (b * -1) - sqrt(pow(b, 2) + (-4 * a * c));

    double resWithPlus = numWithPlus / (2 * a);
    double resWithMenus = numWithMenus / (2 * a);

    printf("The solution using the '+' operator is: %lf\n", resWithPlus);
    printf("The solution using the '-' operator is: %lf\n", resWithMenus);

    return 0;


}