#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head: header
 * @idx: index
 * @n: data
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int counter = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	temp = *head;
	node->n = n;
	while (temp != NULL)
	{
		if ((counter + 1) == idx)
		{
			node->next = temp->next;
			temp->next = node;
		}
		counter++;
		temp = temp->next;
	}
	return (node);
}
