#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 * (printf, puts, etc…) is forbidden
 * Return: 0 means no errors
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
