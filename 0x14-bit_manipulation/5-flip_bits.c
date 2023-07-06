#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * flip_bits - finds number of bits needed to flip numbers back and forth
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, flips;
	unsigned long int num;
	unsigned long int xor_result = n ^ m;

	flips = 0;

	for (a = 63; a >= 0; a--)
	{
		num = xor_result >> a;

		if (num & 1)
		{
			flips++;
		}
	}

	return (flips);
}
