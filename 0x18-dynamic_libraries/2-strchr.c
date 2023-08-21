#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL if not found,or otherwise s after the character is located
 */
char *_strchr(char *s, char c)
{
	char *pt = s;

	for (; *pt != '\0'; pt++)
	{
		if (*pt == c)
			return (pt);
	}
	if (*pt == c)
		return (pt);
	return (0);
}
