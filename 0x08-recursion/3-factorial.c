#include "main.h"

/**
 * factorial -  returns the factorial of a given no.
 * @n: int to calculate factorial of
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
