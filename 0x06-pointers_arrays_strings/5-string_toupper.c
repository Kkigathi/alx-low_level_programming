#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to upper case
 * @s: an input string
 * Return: pointer to new string
 */
char *string_toupper(char *s)
{
	char *up = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (up);
}
