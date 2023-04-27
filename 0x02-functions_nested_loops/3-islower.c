#include "main.h"
/**
 * _islower - Entry point
 * Description: 'Returns 1 if c is a letter, lowercase or uppercase.'
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
