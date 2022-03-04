/*Exercise 1.7.4 asks us to create a function DayName() which prints the day of a given day-number*/

#include<stdio.h>

const char* DayName(int i);	/*Declare DayName function which will return day of week*/

int main()
{
	unsigned int day_num = 0;					/*day_num denotes day of week number*/
												/*Such that 1 refers to Sunday and so on*/
	printf("Enter a day-number: ");				/*Asks for input from user*/
	scanf_s("%d", &day_num);					/*Uses day_num address and inputted value to produce output*/
	printf("%s\n", DayName(day_num));			/*Output is produced using Dayname function*/

	return 0;

}

/*DayName: return name of i-th day of week*/
const char *DayName(unsigned int day_n)			/* day_n is an argument that denotes day number */
{
	const char *day[] = { "Ineligible number", "Day 1 is a Sunday", "Day 2 is a Monday",
		"Day 3 is a Tuesday", "Day 4 is a Wednesday", "Day 5 is a Thursday" , "Day 6 is a Friday",
		"Day 7 is a Saturday" };
	/*1 refers to Sunday, 2 refers to Monday, ... 7 refers to Saturday*/
	/*Ineligible number will be returned when a number outside 1-7 is used for input*/

	return (day_n >= 1 && day_n <= 7) ? day[day_n] : day[0];
	/*For 1<=i<=7, the day of the week is returned based on number proivded*/
	/*For all other values, return ineligible number*/
}