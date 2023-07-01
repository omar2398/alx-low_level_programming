#include "main.h"

/**
 * reverse_array - compares two strings
 * @a: first string to compare
 * @n: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
void reverse_array(int *a, int n)
{
	int b[n], j = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = b[j - 1];
		j--;
	}
	return (b);
}
