#include "main.h"
/**
 * _strlen_recursion - print the string in reverse.
 * @s: string.
 *
 * Return: Void.
 */
int i = 0;
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	else
	{
	return (i);
	}
}
