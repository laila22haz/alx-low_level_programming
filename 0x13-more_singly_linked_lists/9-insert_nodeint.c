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
	listint_t *newNode, *tmp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	tmp = *head;
	for (i = 1; i < idx; i++)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
	}
	if (tmp != NULL)
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	else
	{
		return (NULL);
	}
	return (newNode);
}
