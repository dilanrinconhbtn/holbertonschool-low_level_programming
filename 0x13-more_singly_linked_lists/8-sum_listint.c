#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 * @head: header
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (sum);
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
