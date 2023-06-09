#include "main.h"
/**
 * rev_string - reverses a string
 * @s: array of string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, r = 0;
	char x;

	while (s[r])
		r++;
	r--;
	while (l < r)
	{
		x = s[l];
		s[l] = s[r];
		s[r] = x;
		l++, r--;
	}
}
