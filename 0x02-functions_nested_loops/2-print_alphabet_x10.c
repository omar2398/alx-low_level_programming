#include "main.h"
/**
 * print_alphabet - Used to print the entire alphabet
 *
 * Return: Void
 */
void print_alphabet_x10(void);
{
	int j = 0;

	while (j < 10)
	{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i++);
	}
	_putchar('\n');
	j++;
	}
}
