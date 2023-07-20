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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
void free_dog(dog_t *d);

#endif
