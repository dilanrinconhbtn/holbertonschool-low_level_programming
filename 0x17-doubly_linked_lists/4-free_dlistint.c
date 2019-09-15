#include "lists.h"

/**
 * free_dlistint - check the code for Holberton School students.
 * @head: header
 * Return: Always 0.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
