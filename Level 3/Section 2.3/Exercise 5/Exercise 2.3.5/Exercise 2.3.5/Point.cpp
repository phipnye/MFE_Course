//Point source file implements the Point class defined in the header file

#include "Point.hpp"				//Include Point Header File

Point::Point()						//Point Constructor
{
	m_x = 0;						//Setting the points to (0,0)
	m_y = 0;						//Setting the points to (0,0)
}

Point::Point(double x, double y)	//Constructor that accepts x - and y - coordinates so you can create a point with the right values without using the set functions
{
	m_x = x;						//Setting the x-coordinate
	m_y = y;						//Setting the y-coordinate
}

Point::Point(const Point& p)		//Copy constructor
{
	m_x = p.X();					//Copying x-coordinate
	m_y = p.Y();					//Copying y-coordinate
}

double Point::X() const				//Getter function for x-coordinate
{
	return m_x;
}
double Point::Y() const				//Getter function for y-coordinate
{
	return m_y;
}

void Point::X(double x)				//Setter function for x-coordinate
{
	m_x = x;
}
void Point::Y(double y)				//Setter function for y-coordinate
{
	m_y = y;
}

std::string Point::ToString() const							//Using the str() function to retrieve the string from the string buffer
{
	std::stringstream m_string;								//Using a std::stringstream object and the standard stream operators to create the string
	m_string << "Point(" << m_x << "," << m_y << ")";		//Output in the form of "Point(x, y)”
	return m_string.str();
}

double Point::Distance() const								//Distance to origin function
{
	return sqrt(m_x * m_x + m_y * m_y);						//Returns distance to origin, i.e. (x^2+y^2)^(1/2)
}

double Point::Distance(const Point& p) const				//Distance between two points function
{
	double dis_x, dis_y;
	dis_x = m_x - p.X();									//Distance of first x-coordinate from second x-coordinate
	dis_y = m_y - p.Y();									//Distance of first y-coordinate from second y-coordinate
	return sqrt(dis_x * dis_x + dis_y * dis_y);				//Returns distance between two points i.e. ((x_2-x_1)^2+(y_2-y_1)^2)^(1/2)
}