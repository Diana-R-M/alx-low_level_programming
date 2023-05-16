#include "main.h"
#include <stdio.h>

/**
 * main - prints program's name
 * @argc: count of arguments
 * @argv: array (char) of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
