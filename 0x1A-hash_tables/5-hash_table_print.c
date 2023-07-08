#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table to print
 * Return: Nothing (void)
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned int index;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
		{
			continue;
		}
		head = ht->array[index];
		while (head != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
	}
	printf("}\n");
}
