/*This exercise demonstrates n left shifts, the same as multiply by 2^n, using user input*/

#include <stdio.h>

int main()
{
	int a = 3;								/*a = 3*/
	unsigned int num_of_shifts = 0;			/*Number of shifts variable*/

	printf("Enter the desired power (non-negative integer) of two to multiply by:\n");
	scanf_s("%d", &num_of_shifts);

	printf("\n3 times 2 to the power of %d equals %d", num_of_shifts, a << num_of_shifts);
	/*Prints outcome of 3*2^(num_of_shifts)*/

	return 0;

}