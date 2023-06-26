#include "main.h"
/**
 * print_most_numbers - print the numbers from 0 to 9
 * followed by a new line.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			continue;
			a++;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
