#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *cp_name;
	char *cp_owner;

	if (name != NULL && owner != NULL)
	{
		n_dog = malloc(sizeof(dog_t));
		if (n_dog == NULL)
		{
			return (NULL);
		}

		cp_name = malloc(strlen(name) + 1);
		if (cp_name == NULL)
		{
			free(n_dog);
			return (NULL);
		}

		cp_owner = malloc(strlen(owner) + 1);
		if (cp_owner == NULL)
		{
			free(cp_name);
			free(n_dog);
			return (NULL);
		}

		(*n_dog).name = strcpy(cp_name, name);
		(*n_dog).owner = strcpy(cp_owner, owner);
		(*n_dog).age = age;
	}
	return (n_dog);
}
