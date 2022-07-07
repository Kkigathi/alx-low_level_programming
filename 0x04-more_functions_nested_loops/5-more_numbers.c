#include "main.h"
/**
  4  * more_numbers - prints 10 times the numbers, from 0 to 14
  5  * _putchar only 3 times
  6  * Return: 0-14 x10 followed by new line
  7  */
void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
