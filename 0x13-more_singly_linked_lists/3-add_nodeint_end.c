#include "lists.h"

/*laila22haz*/
/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head : the first argument
 * @n : the second argument
 *
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p;

	p = *head;
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
	new->n = n;
	new->next = NULL;
	}
	else
		return (NULL);
	if (p != NULL)
	{
	while (p->next != NULL)

		p = p->next;

	p->next = new;
	}
	else
		*head = new;

	return (new);
}
