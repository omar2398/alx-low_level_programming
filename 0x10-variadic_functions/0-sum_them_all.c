#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n:input
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list omar;

	va_start(omar, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(omar, int);
	}
	va_end(omar);
	return (sum);
}
