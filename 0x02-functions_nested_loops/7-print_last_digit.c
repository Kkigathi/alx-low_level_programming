#include "main.h"
/**
 * int print_last_digit(int)..gets the last digit of a number
 *x is the result
 *return: the last digit
 */

 int print_last_digit(int xx)
{
	int yy;

	yy = (xx % 10);
	
	if( yy < 0)
	{
		yy = ( -1 * yy);
	}
	_putchar (yy + 0);
	return (yy);
}
	
