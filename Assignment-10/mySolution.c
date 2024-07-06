#include <stdio.h>

int main(void){

int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int size = sizeof(numbers) / sizeof(numbers[0]);
printf("The array has %d elements.\n", size);

return 0;

}