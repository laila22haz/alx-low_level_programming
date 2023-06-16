#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: the first argument
 * @n: the second argument
 *
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *ptr;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	if (*head == NULL)
	{
		new_element->next == NULL;
		new_element->prev = NULL;
		new_element->n = n;
		*head = new_element;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_element;
		new_element->prev = ptr;
		new_element->next = NULL;
	}
	return (new_element);
}
