#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it.
 * @size: size of array
 * @c: char input
 * Return: pointer to array, NULL if fail/ size 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);

	a = 0;
	while (a < size)
	{
	str[a] = c;
	a++;
	}
	return (str);
}
