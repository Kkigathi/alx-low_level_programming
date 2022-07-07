#inlcude "main.h"
/**
  * int_isupper(int c) - checks for an upper case letter
  * @c is an i/p xter
  * it then returns 1 if c is uppercase
  * Returns 0 otherwise
  */

int _isupper(int c);
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}

