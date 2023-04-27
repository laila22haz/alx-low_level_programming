#include "lists.h"
#include <string.h>

/*laila22haz*/
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns the address to the new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int lent;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (lent = 0; str[lent];)
		lent++;

	new_node->str = d;
	new_node->len = lent;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
