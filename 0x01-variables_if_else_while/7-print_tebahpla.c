#include <stdio.h>

/**
 * main - Entry point
 * Description: 'program that prints the lowercase alphabet in reverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
