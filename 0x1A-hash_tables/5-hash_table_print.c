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
	char flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag)
				printf(", ");
			printf("\'%s\':\'%s\'", ht->array[i]->key, hash_table_get(ht, ht->array[i]->key));
			flag = 1;
		}
	}
	printf("}\n");
}
