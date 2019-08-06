#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: header
 * @index: value to change
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int counter;

	if (*head)
	{
		temp = *head;
		if (index > 0)
		{
			for (counter = 0; counter < index; counter++)
				temp = temp->next;
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}
		else
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
