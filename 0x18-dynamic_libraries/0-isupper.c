#include "main.h"
/**
 * _isupper - function prints if the characters are lowercase or not
 * @c: the character being tested
 * Return: 0 for lowercase, 1 for uppercase
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
