#ifndef __protect__
#define __protect__
/**
 * struct dog - informe of poppy
 * @name : name
 * @age: age
 * @owner: onwer
 *
 * Description: all info of poppy
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	/*Informe of Poppy*/
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
