#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - Entry point
 *
 * Description: 'the program's description'
 * @s1:input
 * @s2:input
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0;
	int i, j;
	char *ptr;

	if (s1 != NULL)
		l1 = strlen(s1);
	if (s2 != NULL)
		l2 = strlen(s2);

	ptr = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < l2; j++)
	{
	ptr[i] = s2[j];
	i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
