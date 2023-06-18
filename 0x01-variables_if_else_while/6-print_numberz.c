#include <stdio.h>

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
	char x = '0';

	while (x <= '9')
	{
		printf("%i", x - 48);
		x++;
	}
	printf("\n");
	return (0);
}
