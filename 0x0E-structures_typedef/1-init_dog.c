#include <stdio.h>
#include "dog.h"

/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
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
