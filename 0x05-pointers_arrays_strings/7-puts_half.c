#include "main.h"
/**
 * puts_half - The function should print the second half of the string
 * @str: array of string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	
	i = i / 2 - (i % 2);

	while (str[i])
		_putchar(str[i]);
	
	_putchar('\n');
}
