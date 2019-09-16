#include "lists.h"

/**
 * add_dnodeint_end - check the code for Holberton School students.
 * @head: header
 * @n: dOAata
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
		node->prev = tmp;
	}
	return (*head);
}
