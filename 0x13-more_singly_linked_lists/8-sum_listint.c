#include "lists.h"

/*laila22haz*/
/**
 * sum_listint - function that returns the sum of all the data
 * @head : argument
 * Return: sum or 0 if NULL
 */
int sum_listint(listint_t *head)
{
	int ptr, sum = 0;

	if (!head)
	return (0);
	while (head)
	{
		ptr = head->n;
		sum += ptr;
		head = head->next;
	}
	return (sum);
}
