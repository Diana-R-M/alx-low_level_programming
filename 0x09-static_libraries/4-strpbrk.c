#include "main.h"
/**
 * _strpbrk - searches for any of a set of bytes.
 * @s: string input
 * @accept: char input
 * Return: pointer byte
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
