#include "main.h"

/**
 * print_last_digit - gets last digit
 * @x: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number x
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
