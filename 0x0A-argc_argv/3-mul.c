#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 1(Error),0(Success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	b = 1;
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);

		printf("%d\n", b);
	}
	return (0);
}
