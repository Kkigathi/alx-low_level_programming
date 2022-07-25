#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)

/**	
 *	unsigned int i=0;
 *	unsigned int c=0;
 *	char *copy;
 *
 *	if (str == NULL);
 *	return (NULL);0
 *
 *	while (i >= 0)
 *	{
 *		str[i];
 *		i++;
 *	}
 *	copy = malloc(sizeof(char) * i+1)
 *		for (c = 0; c != '\0'; c++)
 *			str[c];
 *			copy[c] = str[c++];
 *	return (copy);
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}
