#include "main.h"

/**
 * print_rev - entry point
 * Description: 'prints a string, in reverse'
 * @s: string pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int a = 0;
	int b, c;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	c = a;
	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}

