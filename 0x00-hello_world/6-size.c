#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d", sizeof(char));
       	printf(" byte(s)\n");
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a short: %d byte(s)\n", sizeof(short));
	printf("Size of a boolean: %d byte(s)\n", sizeof(bool));
	printf("Size of a double: %d byte(s)\n", sizeof(double));
	printf("Size of a long: %d byte(s)\n", sizeof(long));
	return (0);
}
