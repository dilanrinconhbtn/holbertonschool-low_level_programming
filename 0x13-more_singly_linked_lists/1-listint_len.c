#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
