#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Entry point
 * @name:input
 * @age:input
 * @owner:input
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
