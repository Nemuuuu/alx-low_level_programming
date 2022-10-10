#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure called dog
 * @name: name of dog
 * @age: age of dog
 *@owner: owner of dog
 *
 * This structure defines 3 members name as char type,
 * age as float type and owner as char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /*DOG_H*/
