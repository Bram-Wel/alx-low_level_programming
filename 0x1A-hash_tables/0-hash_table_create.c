#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  *
  * @size: Size of the hash table's array
  * Return: Pointer to new hashtable or NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(size * sizeof(hash_table_t));

	if (!ht)
		return (0);
	return (ht);
}
