#include "lists.h"

/**
 * add_nodeint - check the code for Holberton School students.
 * @head: header
 * @n: data
 * Return: head.
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
