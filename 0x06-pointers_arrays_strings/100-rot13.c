#include "main.h"
/**
 * rot13 - function that encode string using rot13
 * @*n: input string 
 *
 * Return:  a pointer to the encoded string
 */
char *rot13(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		while ((n[i] >= 'a' && n[i] <= 'z') ||
				(n[i] >= 'A' && n[i] <= 'Z'))
		{
			if ((n[i] >= 'a' && n[i] <= 'm') ||
					(n[i] >= 'A' && n[i] <= 'M'))
				n[i] += 13;
			else
				n[i] -= 13;
			i++;
		}
		i++;
	}
	return (n);
}
