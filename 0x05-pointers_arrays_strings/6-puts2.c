#include "main.h"
/**
 * _puts2 - prints a string, followed by a new line
 * @str: array of string
 *
 * Return: void
 */
void puts2(char *str)
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
