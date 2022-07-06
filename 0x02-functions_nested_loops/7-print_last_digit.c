#include "main.h"

/**
 * print_last_digit main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
		y = -1 * (x % 10);
	else
		y = x % 10;

	_putchar((y % 10) + '0');
	return (y % 10);
}
