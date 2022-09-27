#include "hash_tables.h"

/**
  * hash_djb2 - A hashing function employing
  * djb2 algorithm.
  *
  * @str: Key on which to apply the hash function
  * Return: A resulting hash/digest
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
