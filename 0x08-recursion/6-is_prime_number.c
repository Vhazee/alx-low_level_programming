#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check or evaluate
 * Return: 1 if n is a prime or 0 if not
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
