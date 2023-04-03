#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: holds bytes of string s
 * Return: pointer to byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
