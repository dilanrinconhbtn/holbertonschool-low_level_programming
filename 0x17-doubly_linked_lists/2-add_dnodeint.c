#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @head:list
 * @str: double pointer
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	int counter = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = strdup(n);
	if (*head != NULL)
	{
		node->next = *head;
	}
	else if ()
	{
		
	}
	else
		node->next = NULL;
	*head = node;
	return (*head);
}
