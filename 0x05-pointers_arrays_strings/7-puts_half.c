#include "main.h"

/**
 * puts_half - entry point
 * Description: 'print the second half of the string'
 * n = (length_of_the_string - 1) / 2
 * @str: string pointer
 * Return: Always 0
 */

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	for (c = 0; str[c] != '\0'; c++)
		a++;

	n = (a / 2);

	if ((a % 2) == 1)
		n = ((a + 1) / 2);

	for (c = n; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}

