#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d:input
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Age: %f", d->age;
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
