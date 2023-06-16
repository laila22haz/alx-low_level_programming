#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list
 * @head: the first argument
 * @index: the second argument
 *
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_node;
	int count = 0;

	if (head == NULL)
		return (NULL);
	while (n_node != NULL)
	{
		if (count == index)
			return (n_node->n);
		count++;
		n_node = n_node->next;
    	}
}