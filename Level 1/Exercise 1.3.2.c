/*This exercise shows how to create a simple right triangle calculator using user input*/

#include <stdio.h>

int main()
{
	float base = 0.0f;
	float height = 0.0f;

	printf("Base of the triangle:\n");			/*Asking user to enter a base of triangle*/
	scanf_s("%f", &base);

	printf("Height of the triangle:\n");		/*Asking user to enter a height of triangle*/
	scanf_s("%f", &height);

	float surface = (base / 2) * height;		/*area=1/2*base*height*/
	printf("Triangle Surface=%.3f", surface);	/*%.3f rounds result to nearest thousandth*/

	return 0;

}