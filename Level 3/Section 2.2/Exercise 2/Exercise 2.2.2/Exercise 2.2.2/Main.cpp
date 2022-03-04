//Exercise 2.2.2 asks us to extend the Point class created in 2.2.1 to include distance to origin and distance between points functions

#include "Point.hpp"											//Include the point header file

using namespace std;

int main()
{
	double x_1, y_1;
	cout << "Enter a value for the x-coordinate" << endl;
	cin >> x_1;													//Asking the user for the x-coordinate using the std::cin object
	cout << "Enter a value for the y-coordinate" << endl;
	cin >> y_1;													//Asking the user for the y-coordinate using the std::cin object

	Point pt_1;													//Creating a Point object using the default constructor

	pt_1.SetX(x_1);												//Setting the x-coordinate entered by the user using the setter function
	pt_1.SetY(y_1);												//Setting the y-coordinate entered by the user using the setter function

	cout << pt_1.ToString() << endl;							//Printing the description of the point returned by the ToString() function

	cout << "x equals " << pt_1.GetX() << endl;					//Printing the initial x-coordinate using the get function
	cout << "y equals " << pt_1.GetY() << endl;					//Printing the initial y-coordinate using the get function

	cout << "This point is " << pt_1.DistanceOrigin() << " units from the origin." << endl;
	//Printing the initial point's distance from origin in arbitrary units

	double x_2, y_2;
	cout << "Enter another value for the x-coordinate" << endl;
	cin >> x_2;													//Asking the user for another x-coordinate using the std::cin object
	cout << "Enter another value for the y-coordinate" << endl;
	cin >> y_2;													//Asking the user for another y-coordinate using the std::cin object

	Point pt_2;													//Creating a second Point object using the default constructor

	pt_2.SetX(x_2);												//Setting the second x-coordinate entered by the user using the setter function
	pt_2.SetY(y_2);												//Setting the second y-coordinate entered by the user using the setter function

	cout << pt_2.ToString() << endl;							//Printing the description of the second point returned by the ToString() function

	cout << "The new x equals " << pt_2.GetX() << endl;			//Printing the new x-coordinate using the get function
	cout << "The new y equals " << pt_2.GetY() << endl;			//Printing the new y-coordinate using the get function

	cout << "This new point is " << pt_1.Distance(pt_2) << " units from the initial point." << endl;
	//Printing the new point's distance from initial point in arbitrary units

	return 0;

}