#include "main.h"
/**
 * swap_int - a swap function
 * @a: integer's address a
 * @b: integer's address b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
