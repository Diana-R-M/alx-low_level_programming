#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string1 value
 * @s2: string2 value
 * @n: number of bytes from concatenation
 * Return: concatenation or null (fail)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a, b, c, d;

	c = 0;
	while (s1 && s1[c])
		c++;
	d = 0;
	while (s2 && s2[d])
		d++;

	if (n < d)
		x = malloc(sizeof(char) * (c + n + 1));
	else
		x = malloc(sizeof(char) * (c + d + 1));

	if (!x)
		return (NULL);
	for (a = 0; a < c; a++)
	{
		x[a] = s1[a];
	}
	a = 0;
	b = 0;
	while (n < d && a < (c + n))
		x[a++] = s2[b++];

	while (n >= d && a < (c + d))
		x[a++] = s2[b++];

	x[a] = '\0';

	return (x);
}
