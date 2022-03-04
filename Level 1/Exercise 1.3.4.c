/*This exercise is meant to teach how zero applies to false and non-zero applies to true*/
/*We do this by using a simple married or non-married output based on user input*/

#include <stdio.h>

int main()
{
	int married = 0;
	printf("Enter 1 if married or 0 if not:\n");	/*Asks user if married or not*/
	scanf_s("%d", &married);

	printf(married ? "This person is married" : "This person is not married", married);
	/*Prints not married if 0 and married if anything else*/

	printf("\n");

	int x = 5;
	
	printf("%d", x > married ? ++x : --x);
	return 0;

}