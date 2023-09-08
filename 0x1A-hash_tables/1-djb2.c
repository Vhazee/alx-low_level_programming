#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing of the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ch;

	hash = 5381;
	while ((ch = *str++))
		hash = ((hash << 5) + hash) + ch; /* hash * 33 + c */
	return (hash);
}
