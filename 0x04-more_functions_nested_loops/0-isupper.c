#include "main.h"

/**
 * int _isupper(int c) - Entry point
 * Description: 'checks for uppercase character.'
 * @c: character to check
 * Return: 1 uppercase, otherwise 0
 */

 int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z)
		return (1);

	else
		return (0);

}
