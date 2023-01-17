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
	int lname = strlen(name) + 1;
	int lowner = strlen(owner) + 1;
	
	if (name != NULL && owner != NULL)
	{
		n_dog = malloc(sizeof(dog_t));
		if (n_dog == NULL)
			return NULL;
		(*n_dog).name = malloc(sizeof(lname));
		if ((*n_dog).name == NULL)
		{
			free(n_dog);
			return (NULL);
		}
		
		(*n_dog).owner = malloc(sizeof(lowner));
		if ((*n_dog).owner == NULL)
		{
			free((*n_dog).name);
			free(n_dog);
			return (NULL);
		}
		
		(*n_dog).name = strcpy((*n_dog).name, name);
		(*n_dog).owner = strcpy((*n_dog).owner, owner);
		(*n_dog).age = age;
	}
	return (n_dog);
}
