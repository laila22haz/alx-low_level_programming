#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at the beginning of a list
 * @head: the first argument
 * @n: the second argument
 *
 * Return: add of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new_element;

	new_element = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	n = new_element->n;
	(*head) = new_element->next;
	new_elemnt->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new_element;
	}
	(*head) == new_element;
}
