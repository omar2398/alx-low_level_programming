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
	int len = (strlen(s));

	for (int i = len - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
