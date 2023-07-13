#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Entry point
 *
 * Description: 'the program's description'
 * @str:input
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int l;
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	l = strlen(str);
	ptr = (char *)malloc(l + 1 * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		ptr[i] = str[i];

	return (ptr);
}
