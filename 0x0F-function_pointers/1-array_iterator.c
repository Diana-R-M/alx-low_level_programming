#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given on elem arrays.
 * @array: array
 * @size: array elements value
 * @action: function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	a = 0;
	while (a < size)
	{
		a++;
		action(array[a]);
	}
}
