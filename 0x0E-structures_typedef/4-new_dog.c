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
	int i = 0, lenname = 0, lenowner = 0;
	dog_t *dogt;

	dogt = malloc(sizeof(dog_t));
	if (dogt == NULL)
		return (NULL);

	while (*(name + i) != '\0')
	{
		lenname++;
		i++;
	}
	dogt->name = malloc((i + 1) * sizeof(char));
	if (name == NULL)
		return (NULL);

	for (i = 0; i <= lenname; i++)
		dogt->name[i] = name[i];

	dogt->age = age;
	i = 0;
	while (*(owner + i) != '\0')
	{
		i++;
		lenowner++;
	}
	dogt->owner = malloc((i + 1) * sizeof(char));
	if (owner == NULL)
		return (NULL);

	for (i = 0; i <= lenowner; i++)
		dogt->owner[i] = owner[i];

	return (dogt);
}
