#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: the first argument
 * @index: the second argument
 *
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_node;
	unsigned int count;

	n_node = head;
	count = 0;
	while (n_node != NULL)
	{
		if (count == index)
			return (n_node->n);
		n_node = n_node->next;
		count++;
	}
	return (NULL);
}
