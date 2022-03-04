//Exercise 2.3.3 asks us to alter the program made in 2.3.2 by renaming the DistanceOrigin() function to Distance()
//And renmaing the setter and getter functions to their corresponing coordinates

#include "Point.hpp"											//Include the point header file

using namespace std;

int main()
{
	double x_1, y_1;
	cout << "Enter a value for the x-coordinate" << endl;
	cin >> x_1;													//Asking the user for the x-coordinate using the std::cin object
	cout << "Enter a value for the y-coordinate" << endl;
	cin >> y_1;													//Asking the user for the y-coordinate using the std::cin object

	Point pt_1(x_1, y_1);										//Creating initial point without using setter function

	cout << pt_1.ToString() << endl;							//Printing the description of the point returned by the ToString() function

	cout << "x equals " << pt_1.X() << endl;					//Printing the initial x-coordinate using the get function
	cout << "y equals " << pt_1.Y() << endl;					//Printing the initial y-coordinate using the get function

	cout << "This point is " << pt_1.Distance() << " units from the origin." << endl;
	//Printing the initial point's distance from origin in arbitrary units

	double x_2, y_2;
	cout << "Enter another value for the x-coordinate" << endl;
	cin >> x_2;													//Asking the user for another x-coordinate using the std::cin object
	cout << "Enter another value for the y-coordinate" << endl;
	cin >> y_2;													//Asking the user for another y-coordinate using the std::cin object

	Point pt_2(x_2, y_2);										//Creating second point without using setter function

	cout << pt_2.ToString() << endl;							//Printing the description of the second point returned by the ToString() function

	cout << "The new x equals " << pt_2.X() << endl;			//Printing the new x-coordinate using the get function
	cout << "The new y equals " << pt_2.Y() << endl;			//Printing the new y-coordinate using the get function

	cout << "This new point is " << pt_1.Distance(pt_2) << " units from the initial point." << endl;
	//Printing the new point's distance from initial point in arbitrary units

	return 0;

}