#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 * followed by a new line.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
		if (a == '2' || a == '4')
			continue;
	}
	_putchar('\n');
}
