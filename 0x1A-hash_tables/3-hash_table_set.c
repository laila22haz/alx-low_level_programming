#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: is the table to update or add the key/value
 * @key: is the key to add or modify, can't be an empry string
 * @value: is the value associated with the key
 * Return: 1 on success, otherwise 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *head = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
