#include <stdio.h>

/**
 * _strcat - Entry point
 * @dest : input
 * @src : input 2
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int c1, c2 = 0;

	while (dest[c1])
		c1++;
	for (c2 = 0; src[c2]; c2++)
		dest[c1++] = src[c2];
	return (dest);

}
