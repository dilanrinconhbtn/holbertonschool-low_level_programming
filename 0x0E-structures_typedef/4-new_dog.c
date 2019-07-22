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
	int i = 0;
	dog_t *dogt;

	dogt = malloc(sizeof(dog_t));
	if (dogt == NULL)
		return (NULL);

	while (*(name + i) != '\0')
	{
		i++;
	}
	dogt->name = malloc ((i + 1) * sizeof(char));
	if (name == NULL)
		return (NULL);

	dogt->name = name;
	dogt->age = age;
	i = 0;
	while (*(owner + i) != '\0')
	{
		i++;
	}
	dogt->owner = malloc ((i + 1) * sizeof(char));
	if (owner == NULL)
		return (NULL);

	dogt->owner = owner;
	return (dogt);
}
