#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Short description
 * @d: puntero to structure
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
