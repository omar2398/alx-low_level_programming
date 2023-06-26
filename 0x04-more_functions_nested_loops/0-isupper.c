#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
