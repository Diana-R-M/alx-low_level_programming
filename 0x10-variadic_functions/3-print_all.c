#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: function arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a;
	char *string, *separator = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		a = 0;
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					string = va_arg(all, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(all);
}
