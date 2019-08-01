#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: pointer
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
