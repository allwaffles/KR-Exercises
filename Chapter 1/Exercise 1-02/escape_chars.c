/*
 * Filename:	escape_chars.c
 * Author:	Zach Koepp <koeppz@msoe.edu>
 * Date:	26 Feb 2012
 * 
 * The C Programming Language, Second Edition
 * Brian W. Kernighan & Dennis M. Ritchie
 *
 * Exercise 1-2. Pg. 11
 *
 * Experiment to find out what happens when prints's argument string 
 * contains \c, where c is some character not listed above.
 *
 * Results: many "unknown escape character" warnings; the corresponding 
 * characters are printed plainly when the program is run.
 * '\r' and '\a' work as expected.
 */

#include <stdio.h>

int main ()
{
  printf ("\h\e\l\l\o\ \w\a\r\l\d\n");
  return 0;
}

