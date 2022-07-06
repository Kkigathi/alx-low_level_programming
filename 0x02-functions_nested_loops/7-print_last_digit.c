#include "main.h"
/**
 * int print_last_digit(int)..gets the last digit of a number
 *x is the result
 *return: the last digit
 */

 int print_last_digit(int xyz)
{
	int uvw;

	uvw = (xyz % 10);
	
	if( uvw < 0)
	{
		uvw = ( -1 * uvw);
	}
	_putchar (uvw + 0);
	_putchar('\n');
	return (uvw);
}
	
