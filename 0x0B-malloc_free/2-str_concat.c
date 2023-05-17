#include "main.h"
#include <stdlib.h>
/**
 * str_concat - returned pointer points to new memory
 * @s1: char one input
 * @s2: char two input
 * Return: s1, s2 (success), NULL (Fail)
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b] != '\0'; b++)
		;

	for (c = 0; s1[c] != '\0'; c++)
		;

	a = malloc(sizeof(char) * (b + c + 1));

	if (a == NULL)
		return (NULL);

	b = 0;
	while (s1[b] != '\0')
	{
		a[b] = s1[b];
		b++;
	}
	c = 0;
	while (s2[c] != '\0')
	{
		a[b] = s2[c];
		b++;
		c++;
	}
	a[b] = '\0';
	return (a);
}
