#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}