#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * Return: pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (dest);
}
