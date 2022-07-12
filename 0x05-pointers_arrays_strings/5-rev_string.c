#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int ln = 0, i = 0;
	char str;

	while (s[ln] != '\0')
		ln++;

	while (i < ln--)
	{
		str = s[i];
		s[++] = s[ln];
		s[ln] = str;
	}
}
