#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: header
 * @index: index
 * Return: Always 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	temp = head;
	while (temp != NULL)
	{
		if (index == counter)
			return (temp);
		counter++;
		temp = temp->next;
	}
	return (NULL);
}
