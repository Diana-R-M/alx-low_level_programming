#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings.
 * @separator: String to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: Variadic arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *aa;
	unsigned int b;

	va_start(string, n);

	b = 0;
	while (b < n)
	{
		b++;
		aa = va_arg(string, char *);

		if (aa != NULL)
			printf("%s", aa);
		else
			printf("(nil)");

		if (separator != NULL || *separator != 0)
			printf("%s", (char *) separator);
	}

	printf("\n");

	va_end(string);
}
