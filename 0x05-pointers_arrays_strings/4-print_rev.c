#include <stdio.h>
#include <string.h>

/**
 * print_rev - Entry point
 *
 * Description: 'the program's description'
 * @s : input parameters
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	while (--length >= 0)
	{
		putchar(*(s + length));
	}
	putchar('\n');
}
