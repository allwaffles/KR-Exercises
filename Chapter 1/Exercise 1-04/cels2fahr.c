/* 
 * Filename:	cels2fahr.c
 * Author:	Zach Koepp <koeppz@msoe.edu>
 * Date:	01 April 2012
 *
 * The C Programming Language, Second Edition
 * Brian W. Kernighan & Dennis M. Ritchie
 *
 * Exercise 1-4. Pg. 16
 *
 * Write a program to print the corresponding
 * Celsius to Fahrenheit table.
 *
 * Results:
 *
 * Conversion table printed with correct layout
 * and heading. Only 0 and 100 degrees Celsius
 * were verified as correctly converted, but
 * it is fairly safe to assume the rest work
 * out as well.
 *
 * gcc -Wall -o cels2fahr.o cels2fahr.c
 *
 */

#include <stdio.h> 

int main()
{
	float celsius, fahr;
	float lower = 0, upper = 100, step = 10;

	/* Print a heading above the conversion table */
	printf ("Deg. C   Deg. F\n");
	printf ("---------------\n");

	for (celsius = lower; celsius <= upper; celsius += step)
	{
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf ("%6.0f   %6.1f\n", celsius, fahr);
	}

	return 0;
}
