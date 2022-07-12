#include "main.h"

/**
 * puts2 - function that prints every other character 
 * of a string starting from first
 * followed by new line
 * @str : input string
 * Return : nothing
 */

void puts2(char *str)
{
	int ln = 0;

	while (str[ln] != '\0')
	{
		_putchar (str[ln += 2]);
	}
	_putchar ('\n');
}


