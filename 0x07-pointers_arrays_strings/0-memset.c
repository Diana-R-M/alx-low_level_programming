#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: Memory location/address
 * @b: Value input
 * @n: Available number of bytes
 *
 * Return: contents stored in address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n  > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
