//Array.hpp is the header file for the Array class with data members for a dynamic C array of Point objects (Point* m_data) and the size of the array.

#ifndef ARRAY_HEADER		//If ARRAY_HEADER is not yet defined
#define ARRAY_HEADER		//Define it
#include "Point.hpp"

namespace PhilipNye
{
	namespace Containers
	{
		using CAD::Point;
		class Array
		{
		private:
			Point* m_data;			//Data member forr a dynamic C array of Point objects
			int arr_size;			//Data member for the size of the array

		public:
			Array();				//Default Constructor
			~Array();				//Destructor

			Array(const Array& A);	//Copy Constructor
			Array(int size);		//Constructor with a size argument

			Array& operator = (const Array& source);	//Assignment Operator
			Point& operator [] (int index);				//Square bracket operator
			const Point& operator [] (int index) const;	//Const version of square bracket operator

			int Size();								//Size function that returns the size of the array
			void SetElement(int& i, Point& p);		//SetElement() function that sets an element
			Point& GetElement(int i);				//GetElement() function that gets an element
		};
	}
}
#endif