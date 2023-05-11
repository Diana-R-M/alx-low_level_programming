#include "main.h"

/**
 * is_prime_number - determines if int is prime or not
 * @n: int value
 * Return: 1 if n == prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}

/**
 * prime_number - recursive calculation of prime number
 * @n: int value
 * @b: iterator
 * Return: 1 if a == prime, 0 if not
 */
int prime_number(int n, int b)
{
	if (n % b == 0 && b > 0)
	{
		return (0);
	}
	else if (b == 1)
	{
		return (1);
	}
	return (prime_number(n, b - 1));
}
