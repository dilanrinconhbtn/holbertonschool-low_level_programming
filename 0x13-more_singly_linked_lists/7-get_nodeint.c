#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head: header
 * @index: index
 * Return: Always 0.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
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
