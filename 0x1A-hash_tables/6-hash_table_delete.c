#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table
  *
  * @ht: The hash table to delete
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !ht->array || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht->array);
	ht->array = 0;
	ht->size = 0;
	free(ht);
}
