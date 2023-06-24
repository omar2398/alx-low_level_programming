#include "main.h"
/**
 * _isalpha - show if the alphapt is lowercase or not .
 * @c : check the input
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
		return (1);
	return (0);
}
