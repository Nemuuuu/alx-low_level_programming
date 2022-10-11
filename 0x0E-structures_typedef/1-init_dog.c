#include <stdlib.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: this is struct for dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
