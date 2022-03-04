/*Exercise 1.4.5 asks us two make two columns displaying temperatures in celsius and fahrenheit*/
/*Similar to exercise 1.4.4 but in opposite direction*/

#include<stdio.h>

int main()
{
	float fahr, cel;
	/*cel denotes temperature in celsius and fahr denotes temperature in fahrenheit*/
	int min, max, steps;
	/*min and max denote desired temperature range*/
	/*step denotes steps of degrees for output*/

	min = 0;		/*lowest temperature output*/
	max = 19;		/*highest temperature output*/
	cel = min;
	steps = 1;		/*steps value*/

	const char msg1[] = "Fahrenheit";	/*For column title*/
	const char msg2[] = "Celsius";		/*For column title*/

	printf("%10s\t%10s\n", msg2, msg1);

	for (cel = 0; cel <= max; cel += steps)
	{
		fahr = cel * 9 / 5 + 32;				/*fahrenheit=9/5*celsius+32*/
		printf("%10.1f\t%10.1f\n", cel, fahr);
	}

	return 0;

}