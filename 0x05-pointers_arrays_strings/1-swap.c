#include "main.h"

/**
 * swap_int - entry point
 * Description: 'swaps the values of two integers.'
 * @a: input 1 integer to swap
 * @b: input 2 integer to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}

