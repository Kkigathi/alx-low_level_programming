#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of bytes to be used
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, cpy;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (cpy = 0; cpy < n; cpy++)
	{
		dest[i + cpy] = src[cpy];
		if (src[cpy] == '\0')
			cpy = n;
	}

	return (dest);
}
