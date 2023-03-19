#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 means no errors
 */
int main(void)
{
	int i, j, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (x = 0; x <= 9; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(x + '0');
					putchar(y + '0');
					if (i != 9 || j != 9 || x != 9 || y != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
