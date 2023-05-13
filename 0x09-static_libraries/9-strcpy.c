#include "main.h"

/**
 * *_strcpy - entry point
 * Description: ' copies the string pointed to by src'
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char pointer
 * @src: char parameter
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < 1 ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
