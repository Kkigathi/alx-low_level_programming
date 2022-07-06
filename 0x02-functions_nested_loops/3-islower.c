#include "main.h"

/**
 * _islower - Check lower
 * @c: An input character
 * Description: function uses _putchar function to check
 * alphabet in lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
   int c;

   if (c>96 && c<123)
   {
         return (1);   
   }     
    else
   {
         return(0);
   }
}
