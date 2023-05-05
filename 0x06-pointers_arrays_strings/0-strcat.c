 #include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input string
 * @src: input string
 *
 * Return: pointer string
 */
char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;

	}
	dest[a] = '\0';
	return (dest);
}
