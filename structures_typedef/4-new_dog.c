#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - copy info for new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: all info of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	/*check if arg are valid*/
	if (name == NULL || owner == NULL)
		return (NULL);

	if (newDog == NULL)
		return (NULL);

	/*allocate memory and copy*/
	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	/*check if memory allo is succeeded*/
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		/*free if fails*/
		free(newDog);
		free(newDog->name);
		free(newDog->owner);
		return (NULL);
	}
	/*copy age*/
	newDog->age = age;

	return (newDog);
}
