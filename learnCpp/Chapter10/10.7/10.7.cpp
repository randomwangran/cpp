#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <initializer_list> // for std::initializer_list
#include <cassert>



class IntArray
{
private:
	int m_length;
	int *m_data;

public:
	IntArray() :
		m_length(0), m_data(nullptr)
	{
	}

	IntArray(int length) :
		m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list) : // allow IntArray to be initialized via list initialization
		IntArray(list.size()) // use delegating constructor to set up initial array
	{
		// Now initialize our array from the list
		int count = 0;
		for (auto &element : list)
		{
			m_data[count] = element;
			++count;
		}
	}

	IntArray& operator= (const std::initializer_list<int> &list)
	{
		//std::cout << list.size();
		m_length = list.size();

		m_data = new int[list.size()];

		int count = 0;

		for (auto &element : list)
		{
			m_data[count] = element;
			++count;
		}

		return *this;
	}

	~IntArray()
	{
		delete[] m_data;
		// we don't need to set m_data to null or m_length to 0 here, since the object will be destroyed immediately after this function anyway
	}

	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() { return m_length; }
};



int main()
{

	IntArray array { 5, 4, 3, 2, 1 }; // initializer list
	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';

	std::cout << '\n';

	array = { 1, 3, 5, 7, 9, 11 };

	for (int count = 0; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';

    //	system("pause");

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}