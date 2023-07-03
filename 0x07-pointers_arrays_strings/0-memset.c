#include <stdio.h>
#include "main.h"
/**
 * _memset - Entry point
 * @s : input parameters
 * @b : input
 * @n : input
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
