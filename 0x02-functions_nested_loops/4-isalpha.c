#include "main.h"
/**
 * _isalpha(int c); - function returns 1 if c is lowercase
 * @c: character to be checked
 * Return: <return>
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
