#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key looking for
 * Return: the value associated with the element, or NULL otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned int index;

	if (!ht || !key)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
