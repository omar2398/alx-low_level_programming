#include "main.h"
/**
 * _islower - show if the alphapt is lowercase or not .
 * @c : check the input
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
