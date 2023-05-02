#include "lists.h"

/*laila22haz*/
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t
 * @head : the first argument
 * @n : the second argument
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
		temp = ptr;
		ptr = ptr->next;
		temp->n = n;
		temp->next = *head;
		*head = temp;
	return (temp);
}
