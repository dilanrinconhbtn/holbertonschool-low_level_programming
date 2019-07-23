#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Short description
 * @d: First member
 * Description: Longer description
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
