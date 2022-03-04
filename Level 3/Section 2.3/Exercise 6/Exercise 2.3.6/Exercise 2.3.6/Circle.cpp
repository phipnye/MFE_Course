//Circle source file implements the Circle class defined in the circle header file

#define	_USE_MATH_DEFINES		//Defining _USE_MATH_DEFINES for functionality of M_PI
#include "Circle.hpp"			//Include Circle Header File

using namespace std;

Circle::Circle(const Circle& C)				//Copy constructor
{
	center.X(C.Center_Point().X());			//X-coordinate of circle
	center.Y(C.Center_Point().Y());			//Y-coordinate of circle
	radius.Start_p(C.Radius().Start_p());	//Start Point of radius
	radius.End_p(C.Radius().End_p());		//End Point of radius
}

Circle::Circle(Point& P, Line& L)			//Constructor that accepts a line and a point as parameters
{
	center.X(P.X());						//X-coordinate of circle
	center.Y(P.Y());						//Y-coordinate of circle
	radius.Start_p(L.Start_p());			//Start Point of radius
	radius.End_p(L.End_p());				//End Point of radius
}

Point Circle::Center_Point() const			//Center point of Point Class
{
	return center;							//Returns Center of Circle
}
Line Circle::Radius() const					//Radius of Line Class
{
	return radius;							//Returns Radius of Circle
}

void Circle::Center_Point(Point& P)			//Center point of Circle
{
	center.X(P.X());						//Center's x-coordinate
	center.Y(P.Y());						//Center's y-coordinate
}
void Circle::Radius(Line& L)				//Radius of Circle
{
	radius.Start_p(L.Start_p());			//Start point of radius
	radius.End_p(L.End_p());				//End point of radius
}

double Circle::Diameter() const				//Diameter of circle calculation function
{
	return (radius.Length() * 2);			//Diameter = length of radius * 2
}
double Circle::Circumference() const		//Circumference of circle calculation function
{
	return (radius.Length() * 2 * M_PI);	//Circumference = length of radius * 2 * pi
}
double Circle::Area() const					//Area of circle calculation function
{
	return (radius.Length() * radius.Length() * M_PI);		//Area = length of radius * length of radius * pi
}

std::string Circle::ToString() const		//ToString() function that returns a description of the circle
{
	std::stringstream c_string;
	c_string << "The circle has a center of (" << center.X() << "," << center.Y() << ") and a radius of " << radius.Length() << " units";
	//Prints the center of the circle and the radius of the circle based on user input
	return c_string.str();
} 