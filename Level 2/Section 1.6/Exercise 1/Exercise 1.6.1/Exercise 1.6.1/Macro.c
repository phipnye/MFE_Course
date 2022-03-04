/*Exercise 1.6.1 asks us to experiment with macros by creating ones that print the values of a and b*/

#include<stdio.h>
#include "Defs.h"

int main()
{
	int a, b;
	a = 1;				/*a = 1*/
	b = 2;				/*b = 2*/

	PRINT1(a);			/*PRINT1 prints  a = 1 per the macro in Defs.h*/
	PRINT2(a, b);		/*PRINT2 print a = 1 and b = 2 per the macro in Defs.h*/

	return 0;

}