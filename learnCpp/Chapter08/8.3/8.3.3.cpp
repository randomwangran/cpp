// ConsoleApplication4.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iostream>
#include <array>

class Stack
{
	std::array<int, 10> m_array;
	int m_length;

public:
	void reset()
	{
		m_length = 0;
		for (auto &element : m_array)
			element = 0;
	}

	bool push(int a)
	{
		for (int count = 0; count <= m_length; ++count)
		{
			if (m_array[count] == 0)
			{
				m_array[count] = a;
				m_length = count + 1;
				return true;
			}
			else if (count == 10)
				return false;
		}

	}

	void pop()
	{
		if (m_array[m_length-1] == 0)
			return;
		else
		{
			m_array[m_length] = 0;
			m_length = m_length - 1;
		}
	}

	void print()
	{
		//		std::cout << m_array[0];
		//	std::cout << m_length;
		std::cout << "( ";

		if (m_length > 0)
		{
			for (int count = 0; count < m_length; ++count)
				std::cout << m_array[count] << " ";
		}

		std::cout << ")" << std::endl;
	}
};

int main()
{
	Stack stack;
	stack.reset();

	//stack.push(5);
	//stack.print();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	system("pause");
	return 0;

}