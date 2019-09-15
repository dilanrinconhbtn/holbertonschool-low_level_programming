#include "lists.h"
/**
 * print_dlistint - print dlistint
 * @h:  node
 * Return: counter.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
