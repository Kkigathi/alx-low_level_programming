#include "main.h"

/**
 * _strlen_recursion -function that length of a string.
 * @s: string of unknown length.
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
