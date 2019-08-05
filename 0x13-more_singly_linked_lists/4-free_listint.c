#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
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
