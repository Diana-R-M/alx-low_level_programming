#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
 * Return: 0(big endian) or 1(little endian)
 */

int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return (*b);
}
