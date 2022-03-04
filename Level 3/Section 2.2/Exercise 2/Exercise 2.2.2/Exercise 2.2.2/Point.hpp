//Point.hpp is the header file for the Point class with private members for the x- and y-coordinates.

#ifndef POINT_HEADER
#define POINT_HEADER
#include <sstream>
#include <cmath>
#include <iostream>

class Point
{
private:
	double m_x;					//Private member for the x-coordinate
	double m_y;					//Private member for the y-coordinate

public:
	Point() {};					//Default Constructor
	~Point() {};				//Destuctor

	double GetX();				//Getter function for the x-coordinate
	double GetY();				//Getter function for the y-coordinate

	void SetX(double x);		//Setter function for the x-coordinate
	void SetY(double y);		//Setter function for the y-coordinate

	std::string ToString();		//Returns a string description of the point.

	double DistanceOrigin();	// Calculate the distance to the origin (0, 0).
	double Distance(Point p);	// Calculate the distance between two points.
};
#endif