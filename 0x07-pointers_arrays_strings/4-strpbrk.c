#include "main.h"
/**
 * _strpbrk - a function that gets the length of a prefix substring.
 * @s: the main string.
 * @accept: The accepted string.
 *
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		return (*(s + i));
	}
	}
	}
	return (NULL);
}
