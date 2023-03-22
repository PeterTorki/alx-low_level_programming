#include "main.h"
/**
 * print_last_digit(int) - function prints last digit
 * @n: number to be computed
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;
	i = n % 10;
	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
