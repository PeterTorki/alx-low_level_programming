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
	int i, j;

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
