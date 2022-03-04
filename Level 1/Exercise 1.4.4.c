/* Exercise 1.4.4 asks us two make two columns displaying temperatures in celsius and fahrenheit*/

#include<stdio.h>

int main()
{
	float fahr, cel;
	/*cel denotes temperature in celsius and fahr denotes temperature in fahrenheit*/
	int min, max, steps;
	/*min and max denote desired temperature range*/
	/*step denotes steps of degrees for output*/

	min = 0;		/*lowest temperature output*/
	max = 300;		/*highest temperature output*/
	fahr = min;
	steps = 20;		/*steps value*/

	const char msg1[] = "Fahrenheit";	/*For column title*/
	const char msg2[] = "Celsius";		/*For column title*/

	printf("%10s%10s\n", msg1, msg2);

	while (fahr <= max)							/*decides value of fahrenheit to stop at*/
	{
		cel = (fahr - 32) * 5 / 9;				/*celsius=5/9*(fahrenheit-32)*/
		printf("%10.1f%10.1f\n", fahr, cel);
		fahr += steps;							/*increments fahrenheit in desired steps value*/
	}

	return 0;

}