#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h : the first argument
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *link;
	link = h;

	while (link != NULL)
	{
	if (link->str != NULL)
	{
		printf("[%d] %s\n)", link->len,link->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
		link = link->next;
		 count += 1;
	}
	return (count);
}
