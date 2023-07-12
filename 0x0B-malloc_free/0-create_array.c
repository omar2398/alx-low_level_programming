#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 *
 * Description: 'the program's description'
 * @size:input
 * @c: input
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
