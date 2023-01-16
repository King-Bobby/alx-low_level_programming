#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: pointer 
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
