#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -prints all natural numbers from n to 98
 * prints to 98 regardless < 98 or > 98
 * @x: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int x)
{
	if (x < 98)
	{
		while (x <= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			x++;
		}
	}
	else if (x > 98)
	{
		while (x >= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			x--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
