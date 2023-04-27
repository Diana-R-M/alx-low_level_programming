#include "main.h"
/**
 * main - Entry point
 * Description: 'prints the alphabet, in lowercase.'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('\n');
}
