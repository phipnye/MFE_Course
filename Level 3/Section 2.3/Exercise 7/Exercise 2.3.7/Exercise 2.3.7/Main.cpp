//Exercise 2.3.7 asks us to build onto exercise 2.3.6 by speeding up the execution of short functions using inline functions for the getter and setter functions

#include "Point.hpp"		//Include Point Header File
#include "Line.hpp"			//Include Line Header File
#include "Circle.hpp"		//Include Circle Header File

using namespace std;

int main()
{
	double x_1, y_1;
	cout << "Enter an x-coordinate for the center of the circle" << endl;
	cin >> x_1;													//Asking the user for the x-coordinate using the std::cin object
	cout << "Enter a y-coordinate for the center of the circle" << endl;
	cin >> y_1;													//Asking the user for the y-coordinate using the std::cin object]
	Point center(x_1, y_1);										//Initializing the center

	cout << center.ToString() << endl;							//Printing the description of the center returned by the ToString() function

	double x_2, y_2;
	cout << "Enter another x-coordinate to determine the size of the circle" << endl;
	cin >> x_2;													//Asking the user for another x-coordinate using the std::cin object
	cout << "Enter another y-coordinate to determine the size of the circle" << endl;
	cin >> y_2;													//Asking the user for another y-coordinate using the std::cin object
	Point end_p(x_2, y_2);										//Initializing the end point

	cout << end_p.ToString() << endl;							//Printing the description of the end point returned by the ToString() function

	Line radius(center, end_p);									//Initializing the radius to run from the center to some end point on the circumference
	Circle C(center, radius);									//Initializing the circle with a center and a radius

	cout << radius.ToString() << endl;							//Printing the description of the radius using the ToString() function

	cout << center.Distance(end_p) << endl;

	cout << radius.Length() << endl;

	cout << C.ToString() << endl;								//Printing the description of the circle using the ToString() function

	cout << "Measurements of the circle:" << endl;							//Prints "Measurements of the circle: "
	cout << "Diameter = " << C.Diameter() << " units" << endl;				//"Diameter = " 2*r " units"
	cout << "Circumference = " << C.Circumference() << " units" << endl;	//"Circumference = " 2*pi*r " units"
	cout << "Area = " << C.Area() << " units squared" << endl;				//"Area = " pi*r*r "units squared"

	return 0;
}