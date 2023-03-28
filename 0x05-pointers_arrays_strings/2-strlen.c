#include "main.h"
/**
 * _strlen - a function to get string length
 * @s: array of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;
	int count = 0;


	while (*p)
	{
		*p++;
		count++;
	}

	return (count);
	
}
