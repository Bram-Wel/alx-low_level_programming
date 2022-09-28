#include "hash_tables.h"
#include <stdio.h>

/**
  * hash_table_print - Prints a hash table
  *
  * @ht: Hash table to print
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *value;
	char flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			value = hash_table_get(ht, ht->array[i]->key);
			if (flag)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, value);
			flag = 1;
		}
	}
	printf("}\n");
}
