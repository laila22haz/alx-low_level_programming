#include "lists.h"
#include<string.h>

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head : the first argument
 * @str : the second argument
 * Return: address (Sucess) NULL (fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	new_head->len = str;

	new_head = *head;

	*head = new_head;
	return (0);
}
