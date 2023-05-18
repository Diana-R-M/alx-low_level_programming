#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' is printed
 * Return: nothing
**/

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		if (n > 1)
		{
			b = 0;
			while (b < a)
			{
			b++;
			_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
