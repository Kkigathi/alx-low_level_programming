#include "main.h"

/**
 * reverse_array - function that reverse the int in arrays
 * @a: an input array
 * @n: elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
