#include "dog.h"

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
		printf("Name: %S", (d->name) ? d->name : "(nil)");
		printf("Age: %d", (d->age);
		printf("Owner: %S", (d->owner) ? d->owner : "(nil)");
	}
}
