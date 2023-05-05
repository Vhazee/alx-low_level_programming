#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: string of zeros and ones characters
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int otherNum = 0;
	int z;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		otherNum = 2 * otherNum + (b[z] - '0');
	}
	return (otherNum);
}
