//Exercise 2.3.1 asks us to extend the Point class created in 2.2.2 by adding code that displays some text.
//It also asks us to create extra constructors and count how many times they're called.

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

	cout << "x equals " << pt_1.GetX() << endl;					//Printing the initial x-coordinate using the get function
	cout << "y equals " << pt_1.GetY() << endl;					//Printing the initial y-coordinate using the get function

	cout << "This point is " << pt_1.DistanceOrigin() << " units from the origin." << endl;
	//Printing the initial point's distance from origin in arbitrary units

	double x_2, y_2;
	cout << "Enter another value for the x-coordinate" << endl;
	cin >> x_2;													//Asking the user for another x-coordinate using the std::cin object
	cout << "Enter another value for the y-coordinate" << endl;
	cin >> y_2;													//Asking the user for another y-coordinate using the std::cin object

	Point pt_2(x_2, y_2);										//Creating second point without using setter function

	cout << pt_2.ToString() << endl;							//Printing the description of the second point returned by the ToString() function

	cout << "The new x equals " << pt_2.GetX() << endl;			//Printing the new x-coordinate using the get function
	cout << "The new y equals " << pt_2.GetY() << endl;			//Printing the new y-coordinate using the get function

	cout << "This new point is " << pt_1.Distance(pt_2) << " units from the initial point." << endl;
	//Printing the new point's distance from initial point in arbitrary units
	
	//With regards to whether the constructor and destructor were called the same number of times initially:
	//No, the constructor was called twice while the destructor was called three times in total.
	
	//Following the second part of the assignmen and running the program:
	//Yes, the number of times a constructor and destructor were called were equal at three a piece
	//And yes, the copy constructor was called

	return 0;

}