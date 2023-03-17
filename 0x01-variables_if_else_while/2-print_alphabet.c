#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 * (printf, puts, etc…) is forbidden
 * Return: 0 means no errors
 */
int main(void)
{
    for (char c = 'a'; c <= 'z'; c++) {
        putchar(c);
        putchar('\n');
    }
    return (0);
}
