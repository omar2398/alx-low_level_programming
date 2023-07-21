#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - Entry point
 * @name:input
 * @f:input
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
