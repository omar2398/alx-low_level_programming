#include <stdio.h>
#include <stdlib.h>

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
	int sum = 0;
	int i;
	int x;

	if (argc != 1)
	{
	for (i = 0; argv[i] != '0\'; i++)
	{
		x = atoi(argv[i]);
		if (x != 0)
		{
			sum = sum + x;
		}
		else
		{
			printf("Error\n");
			retrun (0);
		}
	}
	}
	else
	{
		printf("0\n");
		retrun (0);
	}
	printf("%d\n", sum);
	return (0);
}
