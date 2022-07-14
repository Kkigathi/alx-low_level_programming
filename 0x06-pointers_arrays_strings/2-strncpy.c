#include "main.h"

/**
 * _strncpy - Entry point
 * @src: fn copies from here
 * @dest: copy to
 * @n: input number of char
 * Return: 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

	return (dest);
}
