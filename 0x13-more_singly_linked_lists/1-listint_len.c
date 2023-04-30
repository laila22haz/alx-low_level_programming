#include "lists.h"

/**
 * listint_len - that returns the number of element
 * @h : the first argument
 *
 * Return: counter
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t counter = 0;

	while (ptr != NULL)
	{
		counter = counter + 1;
		ptr = ptr->next;
	}
	return (counter);
}
