#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
	printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}