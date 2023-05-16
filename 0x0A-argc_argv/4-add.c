#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 1(Error),0(Success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int a;
	int b;

	b = 1;
	sum = 0;
	if (argc < 2)
	{
		printf("%s\n", "0");
		return (0);
	}
	while (b < argc)
	{
		for (a = 0; argv[b][a] != '\0'; a++)
		{
			if (!(isdigit(argv[b][a])))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[b]);
		b++;
	}
	printf("%d\n", sum);
	return (0);
}
