#include <stdio.h>
#include "main.h"

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
	dest = strcat(dest, src);
	return (dest);
}
