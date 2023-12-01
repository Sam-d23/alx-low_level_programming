#include "hash_tables.h"

/**
 * key_index - gets index of a key/value
 *      pair stored in array of a hash table.
 * @key:  key whose index we seek.
 * @size: array size of the hash table.
 *
 * Return: index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
