#include "main.h"
/**
 * print_line - print the numbers from 0 to 9
 * followed by a new line.
 * @n: input
 * Return: Void.
 */
void print_line(int n)
{
	for (int i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
