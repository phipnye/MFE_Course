//Line source file implements the Line class defined in the line header file

#include "Line.hpp"						//Include Line Header File

Line::Line(Point& P1, Point& P2)		//Line Constructor
{
	start_p.X(P1.X());					//Start point x-coordinate
	start_p.Y(P1.Y());					//Start point y-coordinate
	end_p.X(P2.X());					//End point x-coordinate
	end_p.Y(P2.Y());					//End point y-coordinate
}

Line::Line(const Line& L)				//Copy constructor
{
	start_p.X(L.Start_p().X());			//Start point x-coordinate
	start_p.Y(L.Start_p().Y());			//Start point y-coordinate
	end_p.X(L.End_p().X());				//End point x-coordinate
	end_p.Y(L.End_p().Y());				//End point y-coordinate
}

Point Line::Start_p() const				//Getter function for start point
{
	return start_p;
}
Point Line::End_p() const				//Getter function for end point
{
	return end_p;
}

void Line::Start_p(const Point& startp)		//Setter function for start point
{
	start_p.X(startp.X());
	start_p.Y(startp.Y());
}
void Line::End_p(const Point& endp)			//Setter function for end point
{
	end_p.X(endp.X());
	end_p.Y(endp.Y());
}

std::string Line::ToString() const			//Using the str() function to retrieve the string from the string buffer
{
	std::stringstream line_string;			//Using a std::stringstream object and the standard stream operators to create the string
	line_string << "The radius goes from (" << start_p.X() << "," << start_p.Y() << ") to (" << end_p.X() << "," << end_p.Y() << ")";
	//Output in the form of "The line goes from (_,_) to (_,_)”
	return line_string.str();
}

double Line::Length() const					//Length of line function
{
	Point P1(start_p);
	Point P2(end_p);
	return P1.Distance(P2);					//Finds length of line using distance function from Point Class
}