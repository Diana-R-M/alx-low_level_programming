#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'Prints the alphabet, in lowercase.'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
