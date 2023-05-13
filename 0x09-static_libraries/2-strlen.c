#include "main.h"

/**
 * _strlen - entry point
 * Description: 'returns the length of a string.'
 * @s: input char parameter
 * Return: Length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

