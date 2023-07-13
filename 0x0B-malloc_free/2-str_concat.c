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
	int l;
	int i;
	int j;
	int all;
	char *str;

	all = strlen(s1) + strlen(s2);
	l = strlen(s1);
	ptr = (char *)malloc((all + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = s1[i];
	for (j = 0; i < all; i++)
	{
		ptr[i] = s1[j];
		i++;
	}

	return (str);
}
