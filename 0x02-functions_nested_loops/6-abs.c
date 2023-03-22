#include "main.h"
/**
 * _abs - function returns the absolute value of an integer
 * @n: number to be computed
 * Return: abs(n)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
