#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 *
 * Description: 'the program's description'
 * @s1: input
 * @s2:input
 * @n: input
 *
 * Return: Always  0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2;
	unsigned int s2_len = strlen(s2), s1_len = strlen(s1);
	char *omar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_len)
	{
		len2 = s2_len;
	}
	else
	{
		len2 = n;
	}
	omar = (char *)malloc((len2 + s1_len + 1) * sizeof(char));
	if (omar == NULL)
	{
		return (NULL);
	}
		int i;
	for (i = 0; i < s1_len; i++)
	{
		omar[i] = s1[i];
	}
	for (unsigned int j = 0; j < len2; j++)
	{
		omar[i] = s2[j];
		i++;
	}
	omar[i] = '\0';
	return (omar);
}
}
