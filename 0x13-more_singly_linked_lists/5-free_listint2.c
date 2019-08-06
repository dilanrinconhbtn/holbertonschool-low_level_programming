#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: header
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
