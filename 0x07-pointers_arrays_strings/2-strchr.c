#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function returns a pointer
 * @s: input string
 * @c: input character
 * Return: pointer to the first occurrence of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
