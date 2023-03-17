#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, ldo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldo = n % 10;
	printf("Last digit of %d is %d ", n, ldo);
	if(ldo > 5)
		printf("and is greater than 5");
	else if(ldo == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
