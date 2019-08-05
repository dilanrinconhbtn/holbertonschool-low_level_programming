#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: pointer
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	int counter_node = 0;

	while (h != NULL)
	{
		if (h != NULL)
			printf("%d\n", h->n);
		h = h->next;
		counter_node++;
	}
	return (counter_node);
}
