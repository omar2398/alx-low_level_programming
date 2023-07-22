#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @n:input
 * @separator:separator
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list omar;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return (0);
	}
	va_start(omar, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(omar, unsigned int), separator);
		else
			printf("%d", va_arg(omar, unsigned int));
	}
	printf("\n");
	va_end(omar);

}
