//Exercise 3.6.2 asks us to build onto exercise 3.6.1 by creating an exception hierarchy with an Array Exception base class and an Out Of Bounds Exception derived class

#include "Circle.hpp"		//Include Circle Header File
#include "Array.hpp"		//Include Array Header File

using namespace std;
using PhilipNye::CAD::Point;			//Using the full namespace for Point class
using PhilipNye::CAD::Line;				//Using declaration for using a single class (Line)
using namespace PhilipNye::Containers;	//Using declaration for a complete namespace (Containers)
namespace Circ = PhilipNye::CAD;		//Using the Circle class by creating a shorter alias for the YourName::CAD namespace
using namespace Circ;

int main()
{
	double x_0, y_0;								//Declaring doubles of x and y for coordinates
	int arr_size;									//Declaring an integer for the size of an array
	cout << "Please enter an array size: ";			//Allowing user to decide arr_size
	cin >> arr_size;

	Array arr_0(arr_size);							//Declaring an array of the given size by user
	int i;											//Declaring an integer for iterations of a loop
	try
	{
		for (i = 0; i < arr_size; i++)					//For i <= 0 < arr_size
		{
			x_0 = i;							//Set x = i
			y_0 = i;							//Set y = i
			Point p_1(x_0, y_0);				//For simplicity, p_1 will be assigned the corresponding index number for its coordinates
			arr_0[i] = p_1;						//Set ith element to p_1
			cout << "Array Element " << i << " : " << arr_0[i] << endl;
			//Output Constructor w/ Size Argument Test: (i,i),
		}
		cout << arr_0.GetElement(arr_size) << endl;		//Accessing an element that does not exist
	}
	catch (ArrayException& error)		//Catches the ArrayException base class and uses the GetMessage() function to display an error message
	{
		cout << error.GetMessage() << endl;
	}
	catch (...)
	{
		cout << "Unknown Error" << endl;
	}

	return 0;
}