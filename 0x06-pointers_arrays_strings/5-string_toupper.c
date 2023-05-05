#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @n: string pointer
 * Return: string n
 */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = (int)n[a] - 32;
		a++;
	}
	return (n);
}
