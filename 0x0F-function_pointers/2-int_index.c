#include "function_pointers.h"

/**
 * int_index - returns the index if cmp = true
 * @array: array value
 * @size: size of array elements
 * @cmp: comparison pointer
 * Return: no cmp/size<=0 (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	a = 0;
	while (a < size)
	{
		a++;
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
