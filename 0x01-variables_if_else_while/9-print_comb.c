#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		if (a++ != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
