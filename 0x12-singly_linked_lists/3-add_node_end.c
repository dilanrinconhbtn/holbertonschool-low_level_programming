#include "lists.h"

/**
 * add_node_end - check the code for Holberton School students.
 * @head: first position
 * @str: string
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;
	unsigned int counter = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	while (str[counter] != '\0')
		counter++;
	node->len = counter;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
