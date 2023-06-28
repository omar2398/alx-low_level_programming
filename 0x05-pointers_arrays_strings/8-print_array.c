#include "main.h"
#include <stdio.h>
/**
 * print_array - print the first n elements of array.
 * @a: the array.
 * @n: the number of elements.
 *
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
		printf("%d\n", *(a + n - 1));
	}
	else
	{
		printf("\n");
	}
}
