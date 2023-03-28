#include "main.h"
/**
 * _strlen - a function to get string length
 * @s: array of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count++]);

	return (count);
}
