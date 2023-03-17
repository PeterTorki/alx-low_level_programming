#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing the sizes of different types
 * using printf function print formated string
 * sizeof print the size of a data type in bytes
 * Return: 0 means no errors occured
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
