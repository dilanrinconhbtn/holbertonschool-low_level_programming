#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: dogt
 * Description: Longer description
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogt;
	dogt = malloc(sizeof(dog_t));
	if (dogt == NULL)
		return (NULL);
	dogt->name = name;
	dogt->age = age;
	dogt->owner = owner;
	return (dogt);
}
