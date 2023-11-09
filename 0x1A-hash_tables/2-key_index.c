#include "hash_tables.h"
/**
 * key_index - gives the idx of a key
 * @key: key to get idx
 * @size: size of the hash table
 * Return: idx of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
