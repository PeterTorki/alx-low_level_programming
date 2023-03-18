#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 means no errors
 */
int main(void)
{
	char c;
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
