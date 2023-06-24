#include "main.h"

/**
 * _abs - show the sign of numbers  .
 * @n : check the input
 * Return: int
 */

int _abs(int n)
{
	if (n >= 0)
	{
	putchar(n);
	}
	else
	{
	n = -n;
	putchar(n);
	}
}
