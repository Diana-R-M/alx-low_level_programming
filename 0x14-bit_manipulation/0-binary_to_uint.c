#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number string
 * Return: unsigned int(Success) or 0(NULL or b not binary)
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int converted_unit;

	converted_unit = 0;

	if (b == NULL)
		return (0);

	a = 0;
	while (b[a])
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);

		converted_unit = 2 * converted_unit + (b[a] - '0');

		a++;
	}

	return (converted_unit);
}
