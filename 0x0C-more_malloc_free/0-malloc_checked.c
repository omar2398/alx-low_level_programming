#include <stdio.h>

/**
 * malloc_checked - Entry point
 *
 * Description: 'the program's description'
 * @b: input
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b * sizeof(int);
	if (m == NULL)
		exit(98);
	return (m);
}
