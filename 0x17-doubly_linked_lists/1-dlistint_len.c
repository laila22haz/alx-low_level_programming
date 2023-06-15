#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: the first argument
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	print("%d\n", count);
}
