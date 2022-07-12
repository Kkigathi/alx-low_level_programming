#include "main.h"

/**
 * _strlen - function that finds the length of strings
 * @s: string input
 * Return: nothing
 */

int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}
