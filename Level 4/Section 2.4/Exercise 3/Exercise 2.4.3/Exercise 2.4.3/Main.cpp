//Exercise 2.4.3 asks us to build onto exercise 2.4.2 by adding a new Point constructor that accepts one double argument and then experimenting with compiler errors

#include "Point.hpp"		//Include Point Header File
#include "Line.hpp"			//Include Line Header File
#include "Circle.hpp"		//Include Circle Header File

using namespace std;

int main()
{
	//Point p(1.0, 1.0);
	//if (p == 1.0) cout << "Equal!" << endl;
	//else cout << "Not equal" << endl;

	//Initially, the above code compiled (I would've guessed this is because of the boolean operator)
	//It turns out that the Point constructor with the single double argument is implicitly used to convert the number in the if statement to a Point object
	
	//Following explicit declaration, there were compiler errors E0349 (no operator matches...),
	//And C2679	binary '==': no operator found which takes a right - hand operand of type 'double' (or there is no acceptable conversion)

	Point p(1.0, 1.0);
	if (p == (Point)1.0) cout << "Equal!" << endl;
	else cout << "Not equal" << endl;

	//Finally, the above code compiles

	return 0;
}