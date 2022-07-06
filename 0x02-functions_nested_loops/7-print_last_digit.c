#include "main.h"
/**
 * int print_last_digit(int)..gets the last digit of a number
 *x is the result
 *return: the last digit
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
	
