#include "main.h"

/**
 * _sqrt_recursion - function calculates the natural root of a number
 * @n: The number used to calculate the root
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 2);

		if (root == -1)
		{
			return (-1);
		}
		else if (root * root > n)
		{
			return (root - 1);
		}
		else
		{
			return (root);
		}
	}
}
