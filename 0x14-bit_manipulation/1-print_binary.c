#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation
 * @n: input value
 */

void print_binary(unsigned long int n)
{
	int a, value;
	unsigned long int unit;

	value = 0;

	a = 63;
	while (a >= 0)
	{
		unit = n >> a;

		if (unit & 1)
		{
			_putchar('1');

			value++;
		}

		else if (value)
		{
			_putchar('0');
		}

		a--;
	}
	
	if (!value)
        {
		_putchar('0');
	}
}
