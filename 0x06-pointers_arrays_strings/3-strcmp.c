#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 * Return: comparison of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s2[a] - s1[a]);
		}
		a++;
	}
	return (0);
}
