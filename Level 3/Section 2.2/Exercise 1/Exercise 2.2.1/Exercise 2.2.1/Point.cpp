//Point source file implements the Point class defined in the header file

#include "Point.hpp"

double Point::GetX()			//Getter function for x-coordinate
{
	return m_x;
}
double Point::GetY()			//Getter function for y-coordinate
{
	return m_y;
}

void Point::SetX(double x)		//Setter function for x-coordinate
{
	m_x = x;
}
void Point::SetY(double y)		//Setter function for y-coordinate
{
	m_y = y;
}

std::string Point::ToString()							//Using the str() function to retrieve the string from the string buffer
{
	std::stringstream m_string;							//Using a std::stringstream object and the standard stream operators to create the string
	m_string << "Point(" << m_x << "," << m_y << ")";	//Output in the form of "Point(x, y)”
	return m_string.str();
}