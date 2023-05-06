#include "main.h"

/**
 * puts_half - entry point
 * Description: 'print the second half of the string'
 * @str: string pointer
 * Return: Always 0
 */

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	for (c = 0; str[c] != '\0'; c++)
		c++;

	b = (a / 2);

	if ((a % 2) == 1)
		b = ((a + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

