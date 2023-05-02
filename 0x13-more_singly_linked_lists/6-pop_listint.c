#include "lists.h"
/*laila22haz*/
/**
 * pop_listint - function that deletes the head node
 * @head : the head of list
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int N;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	N = tmp->n;
	free(tmp);
	return (N);
}
