#include "lists.h"

/*laila22haz*/
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head : the first argument
 * @index : the second argument
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && count < index)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (head);
}
