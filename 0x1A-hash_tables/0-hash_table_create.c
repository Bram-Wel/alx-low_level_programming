#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  *
  * @size: Size of the hash table's array
  * Return: Pointer to new hashtable or NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (0);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
		return (0);

	for (i = 0; i < size; i++)
		ht->array[i] = 0;

	return (ht);
}
