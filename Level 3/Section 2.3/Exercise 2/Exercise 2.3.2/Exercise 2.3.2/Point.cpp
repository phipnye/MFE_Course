//Point source file implements the Point class defined in the header file

#include "Point.hpp"				//Include Point Header File

using namespace std;

Point::Point()						//Point Constructor
{
	cout << "A constructor has been called. (Original)" << endl;								//Prints that it has been called so we can tell how many times it's been called when the program is run
}																								//Specifying which constructor to be able to tell which one is called when the program is ran
Point::~Point()						//Point Destructor
{
	cout << "A destructor has been called. (Original)" << endl;									//Prints that it has been called so we can tell how many times it's been called when the program is run
}																								//Specifying which constructor to be able to tell which one is called when the program is ran

Point::Point(const Point &p)		//Copy constructor
{
	m_x = p.GetX();
	m_y = p.GetY();
	cout << "A constructor has been called. (Copy)" << endl;									//Prints that it has been called so we can tell how many times it's been called when the program is run
}																								//Specifying which constructor to be able to tell which one is called when the program is ran

Point::Point(double x, double y)	//Constructor that accepts x - and y - coordinates so you can create a point with the right values without using the set functions
{
	m_x = x;
	m_y = y;
	cout << "A constructor has been called. (Alternative Setter Constructor)" << endl;	//Prints that it has been called so we can tell how many times it's been called when the program is run
}																									//Specifying which constructor to be able to tell which one is called when the program is ran

double Point::GetX() const			//Getter function for x-coordinate
{
	return m_x;
}
double Point::GetY() const			//Getter function for y-coordinate
{
	return m_y;
}

std::string Point::ToString()							//Using the str() function to retrieve the string from the string buffer
{
	std::stringstream m_string;							//Using a std::stringstream object and the standard stream operators to create the string
	m_string << "Point(" << m_x << "," << m_y << ")";	//Output in the form of "Point(x, y)”
	return m_string.str();
}

double Point::DistanceOrigin()							//Distance to origin function
{
	return sqrt(m_x * m_x + m_y * m_y);					//Returns distance to origin, i.e. (x^2+y^2)^(1/2)
}

double Point::Distance(const Point &p)					//Distance between two points. Now passing by reference with const point
{
	double dis_x, dis_y;
	dis_x = m_x - p.GetX();								//Distance of first x-coordinate from second x-coordinate
	dis_y = m_y - p.GetY();								//Distance of first y-coordinate from second y-coordinate
	return sqrt(dis_x * dis_x + dis_y * dis_y);			//Returns distance between two points i.e. ((x_2-x_1)^2+(y_2-y_1)^2)^(1/2)
}