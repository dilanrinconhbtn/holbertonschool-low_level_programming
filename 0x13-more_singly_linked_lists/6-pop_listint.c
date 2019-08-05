#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: header
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
	{
		temp = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		return (0);
	}
	return (data);
}
