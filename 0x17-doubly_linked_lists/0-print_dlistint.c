#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements
 * @h: the first argument
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_node);
}
