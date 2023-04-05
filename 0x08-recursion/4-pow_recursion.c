#include "main.h"

/**
 * _pow_recursion - function returns the value x raised to power y
 * @x: input base number
 * @y: the raised power
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
