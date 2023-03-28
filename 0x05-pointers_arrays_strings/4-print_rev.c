#include "main.h"
/**
 * print_rev - prints a string, followed by a new line
 * @s: array of string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int idx = 0;

	while (s[idx])
		idx++;

	while (s[idx])
		_putchar(s[idx--]);
	
	_putchar('\n');
}
