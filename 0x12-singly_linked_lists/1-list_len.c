#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @h : the first argument
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
        int count = 0;
        const list_t *link;
        link = h;

        while (link != NULL)
        {
                link = link->next;
                 count += 1;
        }
        return (count);
}
