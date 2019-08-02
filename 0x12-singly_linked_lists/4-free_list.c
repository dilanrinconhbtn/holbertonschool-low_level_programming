#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (head != NULL)
	{
		while (head != NULL)
		{
			free(temp->str);
			free(temp);
			temp = temp->next;
		}
	}
	free(head);
}
