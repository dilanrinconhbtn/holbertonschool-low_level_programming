#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 * @h: header
 * Return: counter.
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
