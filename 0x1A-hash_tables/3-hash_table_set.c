#include "hash_tables.h"
/*#include <stdio.h>*/

/**
  * hash_table_set - Adds an element into a hash table
  *
  * @ht: Hash table into which to insert the element
  * @key: The key.
  * Used to compute the index for insertion
  * @value: Value that is associated with key
  * Return: 1 on success, 0 on failure
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *nd = malloc(sizeof(hash_node_t));

	if (!key || !nd || !ht)
		return (0);

	nd->key = strdup(key);
	nd->value = strdup(value);
	nd->next = 0;
	idx = key_index((unsigned char *)key, ht->size);
	if (!ht->array[idx])
	{
		ht->array[idx] = nd;
	}
	else
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			free(ht->array[idx]);
			ht->array[idx] = nd;
		}
		else
		{
			nd->next = ht->array[idx];
			ht->array[idx] = nd;
		}
		/*printf("Collision\n");*/
	}
	return (1);
}
