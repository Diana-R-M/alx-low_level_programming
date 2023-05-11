#include "main.h"

/**
 * print_line - draws a straight line
 * @n: int number of times printed
 * Return: 0
 */
void print_line(int n)
{
	int a;

	a = 0;
	while (a <= n)
	{
		_putchar('_');

		a++;
	}
	_putchar('\n');
}
