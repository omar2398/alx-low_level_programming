#include "main.h"
/**
 * factorial - print the string in reverse.
 * @n: string.
 *
 * Return: Void.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
