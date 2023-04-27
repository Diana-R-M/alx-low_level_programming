#include "main.h"
/**
 * _isalpha - Entry point
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
