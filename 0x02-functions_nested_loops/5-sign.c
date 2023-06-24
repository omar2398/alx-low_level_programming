#include "main.h"
/**
 * print_sign - show the sign of numbers  .
 * @n : check the input
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
