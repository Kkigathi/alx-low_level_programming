#include "main.h"
/**
 * factorial - function that finds  the factorial of n
 * @n: integer input
 *
 * Retrun: n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
