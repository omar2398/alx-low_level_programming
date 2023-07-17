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
	unsigned int *m = NULL;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
