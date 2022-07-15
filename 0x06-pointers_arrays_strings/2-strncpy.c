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
	int i = 0, len = 0; /*i is for the array index, len - array length*/

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
