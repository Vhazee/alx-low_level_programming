#include "main.h"

/**
 * get_endianness - function checks the endian either little or big
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
