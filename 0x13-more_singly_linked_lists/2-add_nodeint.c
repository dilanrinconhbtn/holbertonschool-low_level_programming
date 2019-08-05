#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (*head != NULL)
		node->next = *head;
	else
		node->next = NULL;
	*head = node;
	return (*head);
}
