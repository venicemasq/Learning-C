#include <stdio.h>

#define PIE 3.14 

int main(void){
    double radius = 0.0;
    printf("Enter the radius of your circle: ");
    scanf("%lf", &radius);

    double area = radius * radius * PIE;
    printf("The area of your circle is %.2lf\n", area);

    return 0;
}