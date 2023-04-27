#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h : the first argument
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *link;

	link = h;
	while (link != NULL)
	{
		count++;
		link = link->next;
	}
	return (count);
}
