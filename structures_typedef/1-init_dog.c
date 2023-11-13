#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - informe of poppy
 * @d: pointer
 * @name : name
 * @age: age
 * @owner: onwer
 * Return: all info of poppy
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
