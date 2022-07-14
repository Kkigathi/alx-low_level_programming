#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string input
 * @s2: string input
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i=0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return(0);
}
