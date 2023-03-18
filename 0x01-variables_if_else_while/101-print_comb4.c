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
	int i, j, z;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = i + 1 ; j <= 9 ; j++)
		{
			for (z = j + 1 ; z <= 9 ; z++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');
	return (0);
}
