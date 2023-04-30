#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct list_t - list with arguments
 * @str : the first element
 * @len : the second element
 * @next : the third element
 *
 * Description: linked list node structure
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
