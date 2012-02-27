/* 
 * Filename:	hello_world.c	
 * Author:	Umar <khanu@effectedcause.com>
 * Date:	26 February 2012
 *
 * The C Programming Language, Second Edition
 * Brian W. Kernighan & Dennis M. Ritchie
 *
 * Exercise 1-1 . Pg.8 
 *
 * Experiment to find out what happens when prints's argument string 
 * contains \c, where c is some character not listed above.
 *
 * Results: With -Wall option (which gives warnings for common errors
 * that may be potentially grave), error is produced about return value
 * not having been provided, and when it is added (i.e. as 
 * 0), a complaint is made about main not having a description of 
 * its return type. For correctness, in our code we return '0' and 
 * mark main to have an int return type.
 *
 * gcc -Wall -o hello_world.o hello_world.c
 *
 */

#include <stdio.h> 
int main()
{
	printf("Hello World");
	return 0;
}
