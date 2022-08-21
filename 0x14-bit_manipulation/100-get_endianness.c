#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *ch;

	y = 1;
	ch = (char *) &y;

	return ((int)*ch);
}
