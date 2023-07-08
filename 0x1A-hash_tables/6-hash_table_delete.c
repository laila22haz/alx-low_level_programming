#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table content
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *head;

	for (i = 0; ht && i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	if (ht)
		free(ht->array);
	free(ht);
}
