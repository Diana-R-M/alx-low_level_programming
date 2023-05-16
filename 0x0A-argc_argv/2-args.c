#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
