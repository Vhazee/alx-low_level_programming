#include "main.h"

/**
 * _isupper - prints upper letters
 * @c: char to check
 *
 * Return: 1 for upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
