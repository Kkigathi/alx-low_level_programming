#inlcude "main.h"
/**
 * _isupper - checks for an upper case letter
 * @c: is an input  character
 * it then returns 1 if c is uppercase
 * Return: 0 otherwise
 */

int _isupper(int c);
{
	if ((c >= 'A') && (c < 'Z'))
		return (1);
	else
		return (0);
}

