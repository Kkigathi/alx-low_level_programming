#include "main.h"
/**
 * factorial - function that finds  the factorial of n
 * @n: integer input
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
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
