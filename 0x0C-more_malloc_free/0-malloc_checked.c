#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: allocation value
 * Return: pointer to allocated memory; 98 (Fail)
 */
void *malloc_checked(unsigned int b)
{
	void *aaa;

	aaa = malloc(b);

	if (aaa == NULL)
		exit(98);

	return (aaa);
}
