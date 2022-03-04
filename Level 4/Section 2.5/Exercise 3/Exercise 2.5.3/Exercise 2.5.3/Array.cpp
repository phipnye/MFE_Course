//Array source file implements the Array class defined in the array header file

#include "Array.hpp"

Array::Array()					//Default constructor that allocates 10 elements
{	
	arr_size = 10;					//Setting array size to 10 elements
	m_data = new Point[arr_size];	//Allocating memory for 10 elements
}
Array::~Array()					//Destructor that deletes the internal C array
{
	delete[] m_data;			//Deleting internal C array
}

Array::Array(const Array& A)			//Copy Constructor
{
	arr_size = A.arr_size;				//Copy size
	m_data = new Point[A.arr_size];		//Allocate new C array with same amount of memory as the array being copied
	int i;								//Declare i for iterations of loop
	for (i = 0; i < arr_size; i++)		//For i = 0 up until the size of the array
	{
		m_data[i] = A.m_data[i];		//Copy the corresponding element
	}
}
Array::Array(int size)			//Constructor with a size argument that allocates the number of elements specified by the size input argument.
{
	arr_size = size;			//Set size
	m_data = new Point[size];	//Set m_data
}

Array& Array::operator = (const Array& source)	//Assignment Operator
{
	if (source.m_data == m_data && arr_size == source.arr_size)		//Check if the source object is not the same as the this object
	{
		return *this;
	}
	else
	{
		delete[] m_data;						//Delete the old C array
		arr_size = source.arr_size;				//Assign array size
		m_data = new Point[source.arr_size];	//Allocate new memory before copying the elements 
		int i;									//Declare i for iterations of assigning loop
		for (i = 0; i < arr_size; i++)			//For 0 <= i < 3
		{
			m_data[i] = source.m_data[i];		//Assign points
		}
		return *this;
	}
}
Point& Array::operator[](int index)				//Square bracket operator
{
	if (index > 0 && index < arr_size)				//When the data index is in bounds
	{
		return m_data[index];						//Return the corresponding element
	}
	else
	{
		return m_data[0];							//If the data index is out of bounds, return the first element
	}
}
const Point& Array::operator[](int index) const		//Const version of square bracket operator
{
	if (index > 0 && index < arr_size)				//When the data index is in bounds
	{
		return m_data[index];						//Return the corresponding element
	}
	else
	{
		return m_data[0];							//If the data index is out of bounds, return the first element
	}
}

int Array::Size()									//Size() function that returns the size of the array
{
	return arr_size;
}
void Array::SetElement(int& i, Point& p)			//SetElement() function that sets an element
{
	if (i >= 0 && i < arr_size)						//When the data index is in bounds
	{
		m_data[i] = p;								//Set the points
	}
	else
	{
		cout << "Index is out of bonds\n";			//Otherwise, notify the user that the index is out of bounds
	}
}
Point& Array::GetElement(int i)						//GetElement() function that gets an element
{
	if (i > 0 && i < arr_size)						//When the data index is in bounds
	{
		return m_data[i];							//Return the corresponding element
	}
	else
	{
		return m_data[0];							//If the data index is out of bounds, return the first element
	}
}