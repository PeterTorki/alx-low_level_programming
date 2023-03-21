#include <stdlib.h>
#include <time.h>
#include <main.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: _putchar prints a char
 *
 * Return: 0 means no errors
 */

int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while(s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (0);
}
