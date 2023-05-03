#include "lists.h"

/**
 * delete_nodeint_at_index - insert node at idx
 * @head : head of the list
 * @index : index of new node to be deleted
 * Return: the address of the new node
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *bfindex, *afindex, *cindex;

	cindex = *head;
	bfindex = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		afindex = (*head)->next;
		free(cindex);
		*head = afindex;
		return (1);
	}
	else
	{
		while (i < index - 1) /*in case index = last*/
		{
			if (bfindex == NULL)
				return (-1);
			bfindex = bfindex->next;
			i++;
		}
		cindex = bfindex->next;
		afindex = cindex->next;
		bfindex->next = afindex;
		free(cindex);
		return (1);
	}
	return (1);
}
