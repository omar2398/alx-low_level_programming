#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  array_range- Entry point
 *@min: size of the array
 *@max: size of the type
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int i;
	int *omar = NULL;

	if (min > max)
		return (NULL);
	omar = malloc(((max - min) + 1) * sizeof(int));
	if (!omar)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < ((max - min) + 1); i++)
	{
		omar[i] = min++;
	}
	return (omar);
	}
}
