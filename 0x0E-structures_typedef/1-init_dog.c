/*
 * File: 1-init_dog.c
 * Auth: Ifeanyi I Ekezie
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to a struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes a struct dog with the provided values.
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
