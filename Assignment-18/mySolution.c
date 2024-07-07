#include <stdio.h>

void hello(void)
{
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};

	printf("%s", array);
    puts(array);
}

int main(void) 
{
	hello();
}










/*
#include <stdio.h>


void hello(void)
{
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};

	printf("%s", array);
    puts(array); //this functions add a new line at the end
}



int main(void) 
{
	hello();
}

*/