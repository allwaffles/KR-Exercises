/* 
 * Filename:	temp_conv.c	
 * Author:	Umar <khanu@effectedcause.com>
 * Date:	27 February 2012
 *
 * The C Programming Language, Second Edition
 * Brian W. Kernighan & Dennis M. Ritchie
 *
 * Exercise 1-3 . Pg. 13
 *
 * Modify the temperature conversion program to print a heading
 * above the table.
 *
 * Results: F-to-C conversion table is printed properly,
 * with proper indentation. The label happens to fit
 * without much haggling, but it would be worthwhile to not
 * that were the need necessary to adjust indentation or 
 * spaces, \t could have been used
 * 
 * gcc -Wall -o temp_conv temp.conv.c
 *
 */

#include <stdio.h>

/*
 * print Fahrenheit-Celsius table
 * for fah = 0, 20, ..., 300; floating-point version
 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper lmit */
	step = 20;	/* step size */
	
	printf("Fahr Celsius\n");

	fahr = lower;
	while (fahr <= upper ) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}	

