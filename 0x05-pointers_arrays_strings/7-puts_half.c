#include "main.h"
/**
 * puts_half - function that prints second half
 * of a string, if odd it prints the n characters
 * @str : input string
 * return : nothing
 */

void puts_half(char *str)
{
	int ln = 0, i, n;

	while (str[ln] != '\0')
		ln++;

	if (ln % 2 == 0)
		i = ln / 2;
	else
		i = (ln + 1) / 2;
	for (n = i; n < ln; n++)
		_putchar(str[n]);
	_putchar('\n');
}


