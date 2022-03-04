//Exercise 2.2.1 asks us to create a Point class with and x- and y-coordinates

#include "Point.hpp"											//Include the point header file

using namespace std;

int main()
{
	double x, y;
	cout << "Enter a value for the x-coordinate" << endl;
	cin >> x;													//Asking the user for the x-coordinate using the std::cin object
	cout << "Enter a value for the y-coordinate" << endl;
	cin >> y;													//Asking the user for the y-coordinate using the std::cin object

	Point pt;													//Creating a Point object using the default constructor

	pt.SetX(x);													//Setting the x-coordinate entered by the user using the setter function
	pt.SetY(y);													//Setting the y-coordinate entered by the user using the setter function

	cout << pt.ToString() << endl;								//Printing the description of the point returned by the ToString() function

	cout << "x equals " << pt.GetX() << endl;					//Printing the x-coordinate using the get function
	cout << "y equals " << pt.GetY() << endl;					//Printing the y-coordinate using the get function

	return 0;

}