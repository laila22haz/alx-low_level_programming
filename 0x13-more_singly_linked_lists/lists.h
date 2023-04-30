#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint - list with arguments
 * @n : the second element
 * @next : the third element
 *
 * Description: linked list node structure
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
