#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: the first argument
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
    while (head != NULL)
    {
        dlistint_t *node = head->next;
        free(head);
        head = node;
    }
}