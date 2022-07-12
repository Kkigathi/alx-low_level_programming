#include "main.h"
/**
 * swap_int -function that swaps the values contained in a and b
 * @a: an input
 * @b: an input
 * Return : nothing
 */
void swap_int(int *a, int *b)
{	
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
