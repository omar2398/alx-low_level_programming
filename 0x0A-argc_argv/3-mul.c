#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @argc : input counter
 * @argv : input String
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
