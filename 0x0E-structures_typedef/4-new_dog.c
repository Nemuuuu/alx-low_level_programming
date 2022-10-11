#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

char *_copy(char *src);

/**
 * new_dog - creates new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	(*puppy).name = new_name;
	(*puppy).age = age;
	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*puppy).name);
		free(puppy);
		return (NULL);
	}
	(*puppy).owner = new_owner;
	return (puppy);
}

/**
 * _copy - make a copy of passed in argument
 * @src: data to make copy of
 * Return: pointer
 */
char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}
	for (len = 0; src[len] != '\0'; len++)
		ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
