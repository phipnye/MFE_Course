//Point.hpp is the header file for the Point class with private members for the x- and y-coordinates.

#ifndef POINT_HEADER			//If POINT_HEADER is not yet defined
#define POINT_HEADER			//Define it
#include <sstream>				//Include sstream header file
#include <cmath>				//Include cmath header file
#include <iostream>				//Include iostream header file

class Point
{
private:
	double m_x;					//Private member for the x-coordinate
	double m_y;					//Private member for the y-coordinate

public:
	Point();					//Default Constructor
	~Point();					//Destuctor

	Point(const Point& p);		//Copy Constructor
	Point(double x, double y);	//Constructor that accepts x - and y - coordinates so you can create a point with the right values without using the set functions

	double X() const;			//Getter function for the x-coordinate
	double Y() const;			//Getter function for the y-coordinate

	void X(double x);			//Setter function for the x-coordinate
	void Y(double y);			//Setter function for the y-coordinate

	std::string ToString();		//Returns a string description of the point.

	double Distance();					// Calculate the distance to the origin (0, 0). Renamed to Distance from DistanceOrigin
	double Distance(const Point& p);	// Calculate the distance between two points.
};
#endif