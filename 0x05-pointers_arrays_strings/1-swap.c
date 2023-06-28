#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * Description: 'the program's description'
 * @a : input parameters
 * @b : input parameters2
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b);
{
	int c = *a;
        int d = *b;
	*b = c;
	*a = d;
}
