#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: num of int
 * Return: ntg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list omar;
	unsigned int i;

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
