//Exercise 2.3.5 asks us to create a Line class that has a start - and an end - point.So the Line class should have two Point objects as data members.

#include "Point.hpp"		//Include Point Header File
#include "Line.hpp"			//Include Line Header File

using namespace std;

int main()
{
	double x_1, y_1;
	cout << "Enter a value for the x-coordinate" << endl;
	cin >> x_1;													//Asking the user for the x-coordinate using the std::cin object
	cout << "Enter a value for the y-coordinate" << endl;
	cin >> y_1;													//Asking the user for the y-coordinate using the std::cin object]
	Point start_p(x_1, y_1);									//Initializing the start point

	cout << start_p.ToString() << endl;							//Printing the description of the start point returned by the ToString() function

	cout << "x equals " << start_p.X() << endl;					//Printing the x-coordinate of start point using the get function
	cout << "y equals " << start_p.Y() << endl;					//Printing the y-coordinate of start point using the get function

	cout << "This point is " << start_p.Distance() << " units from the origin." << endl;
	//Printing the start point's distance from origin in arbitrary units

	double x_2, y_2;
	cout << "Enter another value for the x-coordinate" << endl;
	cin >> x_2;													//Asking the user for another x-coordinate using the std::cin object
	cout << "Enter another value for the y-coordinate" << endl;
	cin >> y_2;													//Asking the user for another y-coordinate using the std::cin object
	Point end_p(x_2, y_2);										//Initializing the end point

	cout << end_p.ToString() << endl;							//Printing the description of the end point returned by the ToString() function

	cout << "x equals " << end_p.X() << endl;					//Printing the x-coordinate of end point using the get function
	cout << "y equals " << end_p.Y() << endl;					//Printing the y-coordinate of end point using the get function
	
	Line L(start_p, end_p);										//Initializing line using user-input for points

	cout << L.ToString() << endl;								//Printing the description of the line using the ToString() function

	cout << "The line is " << L.Length() << " units long." << endl;
	//Printing the line's length in arbitrary units

	return 0;
}