#include "lists.h"

/*laila22haz*/
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head : the first argument
 * @idx : the second argument
 * @n : the third argument
 *
 * Return: address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && temp; i++)
	{
		if (!temp || !temp->next)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
