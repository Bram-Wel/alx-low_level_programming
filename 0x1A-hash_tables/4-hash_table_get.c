#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  *
  * @ht: Hash table to search
  * @key: key to find
  * Return: value or null if no key is found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (!ht || !key)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		while (ht->array[idx]->next)
			ht->array[idx] = ht->array[idx]->next;
		return (ht->array[idx]->value);
	}
	return (0);
}
