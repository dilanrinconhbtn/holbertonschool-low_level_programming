/**
 * free_dog - Short description
 * @d: First member
 * Description: Longer description
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		free(owner);
		free(name);
		free(d);
	}
}
