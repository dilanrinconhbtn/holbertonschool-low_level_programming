#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @head:list
 * @str: double pointer
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int counter = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	while (str[counter] != '\0')
	{
		counter++;
	}
	node->len = counter;
	if (*head != NULL)
		node->next = *head;
	else
		node->next = NULL;
	*head = node;
	return (*head);
}
