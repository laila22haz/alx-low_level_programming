#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of a list
 * @head: the first argument
 *
 * Return: the sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
