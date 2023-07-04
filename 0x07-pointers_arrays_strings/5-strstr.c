#include "main.h"
/**
 * _strstr - function that searches a string for any of a set of bytes..
 *@haystack : first value -char
 *@needle : second value - char
 *
 * Return: char with result
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] ==  needle[j])
			{
				k = i;
				while (needle[j] != '\0')
				{
					i++;
					j++;
					if (haystack[i] !=  needle[j])
					{
						return (NULL);
					}
				}
			}
		}
	}
	return (*(haystack + k));
}
