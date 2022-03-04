//Point source file implements the Point class defined in the header file

#include "Point.hpp"									//Include Point Header File

using namespace std;

double Point::GetX()									//Getter function for x-coordinate
{
	return m_x;
}
double Point::GetY()									//Getter function for y-coordinate
{
	return m_y;
}

void Point::SetX(double x)								//Setter function for x-coordinate
{
	m_x = x;
}
void Point::SetY(double y)								//Setter function for y-coordinate
{
	m_y = y;
}

std::string Point::ToString()							//Using the str() function to retrieve the string from the string buffer
{
	std::stringstream m_string;							//Using a std::stringstream object and the standard stream operators to create the string
	m_string << "Point(" << m_x << "," << m_y << ")";	//String in the form of "Point(x, y)”
	return m_string.str();
}

double Point::DistanceOrigin()							//Distance to origin function
{
	return sqrt(m_x * m_x + m_y * m_y);					//Returns distance to origin, i.e. (x^2+y^2)^(1/2)
}

double Point::Distance(Point p)							//Distance between two points function
{
	double dis_x, dis_y;
	dis_x = m_x - p.GetX();								//Distance of first x-coordinate from second x-coordinate
	dis_y = m_y - p.GetY();								//Distance of first y-coordinate from second y-coordinate
	return sqrt(dis_x * dis_x + dis_y * dis_y);			//Returns distance between two points i.e. ((x_2-x_1)^2+(y_2-y_1)^2)^(1/2)
}