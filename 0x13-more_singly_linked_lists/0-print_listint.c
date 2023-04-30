#include "lists.h"

/*laila22haz*/
/**
 * print_listint - prints all the elements of a listint_t list
 * @h : the first argument
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t counter = 0;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->n);
		ptr = ptr->next;
		counter = counter + 1;
	}
	return (counter);
}
