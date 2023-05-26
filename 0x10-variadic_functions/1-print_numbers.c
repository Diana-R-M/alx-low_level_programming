#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: variadic arguments
 * Return: numbers or 0 if separator = NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int a;

	va_start(number, n);

	a = 0;
	while (a < n)
	{
		a++;
		printf("%d", va_arg(number, int));

		if (separator != NULL || *separator != 0)
			printf("%s", separator);
	}

	printf("\n");

	va_end(number);
}
