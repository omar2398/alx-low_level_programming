#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar("\n");
	return (0);
}
