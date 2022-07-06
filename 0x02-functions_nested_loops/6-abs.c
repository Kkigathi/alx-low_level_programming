#include "main.h"
/**
 * _abs - a function that computes the absolute value of a given number
 * @i: integer input
 * Return: absolute value of i
 */
int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
