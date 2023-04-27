#include "lists.h"

/*laila22haz*/
/**
 * print_list - function that prints all the elements of a list_t list
 * @h : the first argument
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *link = h;

	while (link != NULL)
	{
	if (link->str != NULL)
	{
		printf("[%u] %s\n", link->len, link->str);
	}
	else
	
		printf("[0] (nil)\n");
	count += 1;
	link = link->next;
	}

	return (count);
}
