#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head:list
 * @n: strct
 * Return: node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head != NULL)
	{
		node->next = *head;
		(*head)->prev = node;
	}
	*head = node;
	return (*head);
}
