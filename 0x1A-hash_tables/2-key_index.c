#include "hash_tables.h"

/**
  * key_index - Obtains the index of a key using a hash
  * function that employs djb2 algorithm
  *
  * @key: The key
  * @size: Size of the hash table array
  * Return: index for storing the key value pair
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
