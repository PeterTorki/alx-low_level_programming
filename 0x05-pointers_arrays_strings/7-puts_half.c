#include "main.h"
/**
 * puts_half - The function should print the second half of the string
 * @str: array of string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	
	j = (i - (i % 2)) / 2 ;

	while (str[j])
		_putchar(str[j++]);
	
	_putchar('\n');
}
