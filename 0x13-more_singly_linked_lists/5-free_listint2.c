#include "lists.h"

/*laila22haz*/
/**
 * free_listint2 - a function that frees a listint_t list
 * *head : argument
 *
 * Return: NOTHING
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head == NULL)
	{
		tmp = *head;
		*head = *head->next;
		free(tmp);
	}
}
