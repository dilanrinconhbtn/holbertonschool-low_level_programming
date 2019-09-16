#include "lists.h"
/**
 * dlistint_len - print dlistint
 * @h: node
 * Return: counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
