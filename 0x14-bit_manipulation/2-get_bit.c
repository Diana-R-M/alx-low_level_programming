#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * get_bit - returns bit value at a given index
 * @n: integer
 * @index: bit index
 * Return: bit value(Success) or -1(Fail)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}

	bit_value = (n >> index) & 1;

	return (bit_value);
}
