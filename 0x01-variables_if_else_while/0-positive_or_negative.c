#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: get last digit of a random number and find its properties
 * greater than 5 or zero or less than 6 and not 0
 * Return: 0 means no errors
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n > 0) 	
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");	
	return (0);
}
