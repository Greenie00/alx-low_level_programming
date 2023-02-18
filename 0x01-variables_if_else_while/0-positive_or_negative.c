#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point here
 * 
 * Return: always 0 (To show Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
	    printf("is positive\n");
	}
	else if (n<0)
	{
	    printf("is negative\n");
	}
	else if (n=0)
	{
	    printf("is zero\n");
	}
	return (0);
}
