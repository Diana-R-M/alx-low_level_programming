#include "main.h"

/**
 * print_numbers - Entry point
 * Description: 'prints the numbers, from 0 to 9'
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char a = 0;

	for(a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}

