#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: array of string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
