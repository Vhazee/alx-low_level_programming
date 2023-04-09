#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input string
 * @c: character to print
 * Return: String character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
