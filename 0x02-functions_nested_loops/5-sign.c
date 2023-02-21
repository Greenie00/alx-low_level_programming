#include "main.h"

/**
 * print_sign - print sign depending on the ineger value of n
 *
 * Result: Returns 1 if n is greater than 0, 0 if n is 0 and -1 if n is a negative number
 */

int print_sign(int n)
{
        if (n > 0)
        {
                return (1);
                printf('+');
        }

        else if (n < 0)
        {
                return (-1);
                printf('-');
        }
        else
        {
                return(0);
                printf('0');
        }
        return (0);
}
