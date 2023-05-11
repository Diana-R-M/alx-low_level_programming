#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int value
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt(n, 1));
}

/**
 * natural_sqrt - recurses to find the sqrt
 * @n: int value
 * @i: iterator
 * Return: sqrt
 */
int natural_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (natural_sqrt(n, i + 1));
}
