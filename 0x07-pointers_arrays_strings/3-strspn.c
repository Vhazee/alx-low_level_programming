#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input string
 * @accept: input
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				z++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (z);
		}
		s++;
	}
	return (z);
}
