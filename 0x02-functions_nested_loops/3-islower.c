#include "main.h"
#include <ctype.h>
/**
 * _islower - function returns 1 if c is lowercase
 *
 * Return: <return>
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
