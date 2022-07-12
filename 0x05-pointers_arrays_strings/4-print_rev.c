#include "main.h"
/**
 * print_rev - function that prints a str in reverse
 * followed by a new line
 * @s: string input
 * Return: nothing
 */
void print_rev(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}
	while (ln)
		_putchar (s[--ln]);

	_putchar('\n');
}
