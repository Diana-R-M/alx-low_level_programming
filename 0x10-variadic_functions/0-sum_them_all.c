#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  sum of all parameters.
 * @n: number of parameters
 * @...: variadic_functions
 * Return: sum or if n == 0 return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, sum;

	sum = 0;
	va_start(a, n);

	b = 0;
	while (b < n)
	{
		b++;
		sum += va_arg(a, int);
	}
	va_end(a);

	return (sum);
}
