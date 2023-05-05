#include "main.h"

/**
 * print_array - entry point
 * Description: ' prints n elements of an array of integers'
 * @n: number of elements of the array
 * @a: integer pointer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		if (b == (n - 1))
			printf("%d", a[n - 1]);
		else
			printf(", %d", a[b]);
	}
		printf("\n");
}
