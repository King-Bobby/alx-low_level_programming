#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees memory
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free((*d).name);
		free((*d).age);
		free((*d).owner);
		free(d);
	}
}
		
