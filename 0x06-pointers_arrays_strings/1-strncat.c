#include "main.h"
/**
 * _strncat - Entry point
 * @dest : input
 * @src : input 2
 * @n : input3
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
