#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: String value
 * Return: str
 */
char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
			a++;
		if (str[a] == ' ' || str[a] == '\t' ||
			str[a] == '\n' || str[a] == ',' ||
			str[a] == ';' || str[a] == '.' || 
			str[a] == '!' || str[a] == '?' ||
			str[a] == '"' || str[a] == '(' ||
			str[a] == ')' || str[a] == '{' ||
			str[a] == '}')
			str[a] = str[a] - 32;
	}
	return (str);
}
