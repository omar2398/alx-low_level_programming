#include <stdio.h>
#include "main.h"

/**
 * _isupper - is an internal function
 * Description: 'the program's description'
 * @c : input
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
