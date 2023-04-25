#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase except letters q and e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'e' && alphabet != 'q')
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
