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
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
