#include "main.h"

/**
 * char *_strcpy - a function that copies string pointed to by src
 * @dest: dest to copy to
 * @src: copy from address
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
