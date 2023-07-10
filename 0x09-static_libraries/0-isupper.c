#include "main.h"
/**
 * _isupper - check whether the character is an uppercase
 * letter in english or not.
 * @c: The letter to be checked
 *
 * Return: 1 if uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
