#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'Checks if a random number is positive, zero or negative.'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

		_putchar('\n');

	}
}
