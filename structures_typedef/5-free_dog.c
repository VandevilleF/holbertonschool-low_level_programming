#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - free dog
 * @d: pointer
 * Return: free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/*free alloc memory*/
		free(d->name);
		free(d->owner);
		/*free*/
		free(d);
	}
}
