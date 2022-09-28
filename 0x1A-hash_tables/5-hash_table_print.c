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
	char *value, *key;
	char flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			key = ht->array[i]->key;
			value = ht->array[i]->value;
			if (flag)
				printf(", ");
			printf("'%s': '%s'", key, value);
			while (ht->array[i]->next)
			{
				key = ht->array[i]->next->key;
				value = hash_table_get(ht, key);
				printf(", '%s': '%s'", key, value);
			}
			flag = 1;
		}
	}
	printf("}\n");
}
