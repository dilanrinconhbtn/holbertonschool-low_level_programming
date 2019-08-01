#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: pointer
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	unsigned int counter_nodes = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter_nodes++;
	}
	return (counter_nodes);
}
