#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates new string to new memory
 * @str: char input
 * Return: 0
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int b, c;

	if (str == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (str[b] != '\0')
		b++;
	c = 0;
	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; str[c]; c++)
		a[c] = str[c];
	a[b] = '\0';
	return (a);
}

