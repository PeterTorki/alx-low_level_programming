#include "main.h"
/**
 * _islower - function returns 1 if c is lowercase
 * @c: character to be checked
 * Return: <return>
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
