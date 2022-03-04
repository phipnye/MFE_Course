/*Exercise 1.5.1 asks us to create a minus function and have its value printed in main*/

#include<stdio.h>

float minus(float a, float b)
{
	return a - b; 
}

int main()
{
	float a, b;
	printf("Enter a value to subtract from: \n");
	scanf_s("%f", &a);									/*?=a-?*/
	printf("Enter a value to subtract: \n");
	scanf_s("%f", &b);									/*?=a-b*/
	printf("Answer: %f", minus(a, b));					/*print value of a-b using minus function*/

	return 0;
}