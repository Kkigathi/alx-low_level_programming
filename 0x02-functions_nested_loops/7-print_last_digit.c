#include "main.h"
/**
 * int print_last_digit(int)..gets the last digit of a number
 *x is the result
 *return: the last digit
 */

 int print_last_digit(int x)
{
	int y;

	y = (x % 10);
	
	if( y < 0)
	{
		y = ( -1 * y);
	}
	_putchar (y + 0);
	return (y);
}
	
