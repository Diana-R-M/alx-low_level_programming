#include "main.h"

/**
 * rev_string - entry point
 * Description: 'reverses a string'
 * @s: string pointer
 * Return: Always 0
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int a = 0;
	int b;

	while (s[a] != '\0')
	a++;

	for (b = 0; b < a; b++)
	{
		b--;
		reverse = s[b];
		s[b] = s[a];
		s[a] = reverse;
	}
}
