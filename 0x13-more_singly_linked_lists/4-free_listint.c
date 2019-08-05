#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: header
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
