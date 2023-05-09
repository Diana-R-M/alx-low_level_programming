#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: value
 * @size: matrix size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2 = 0;
	int b;

	for (b = 0; b < size; b++)
	{
		sum1 = sum1 + a[b * size + b];
	}

	for (b = size - 1; b >= 0; b--)
	{
		sum2 = sum2 + a[b * size + (size - b - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
