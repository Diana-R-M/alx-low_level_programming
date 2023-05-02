#include "main.h"

/**
 * print_rev - entry point
 * Description: 'prints a string, in reverse'
 * @str: string pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	for (b = a; b > 0; b--)
	{
		_putchar(s[b]);
		s--;
	}

	_putchar('\n');
}

