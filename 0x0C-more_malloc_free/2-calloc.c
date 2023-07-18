#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: string 1
 * @size: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *omar = NULL;
	unsigned int i, j;
	char *f;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	omar = malloc(nmemb * size);
	f = (char *)omar;
	if (omar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
			f[i] = 0;
		return (f);
	}
}
