#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * set_bit - sets bit value to 1
 * @n: pointer
 * @index: bit index
 * Return: 1(Success) or -1(Fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
