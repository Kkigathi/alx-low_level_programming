#include "main.h"

/**
 * _puts - function that prints a string followed by
 * new line
 * @str : string input
 * Return : nothing
 */
void _puts(char *str)
{
	int ln = 0;

	while (str[ln] != '\0')
	{
		_putchar(str[ln]);
		ln++;
	}
	_putchar('\n');
}
