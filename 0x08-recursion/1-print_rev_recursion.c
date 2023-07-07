#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s : input parametar
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n')
		return;
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(*(s + 1);
	}
}