// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cmath>


class HelloWorld
{
private:
	char *m_data;

public:
	HelloWorld()
	{
		m_data = new char[14];
		const char *init = "Hello, World!";
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}

	~HelloWorld()
	{
		delete[] m_data;
	}

	void print() const
	{
		std::cout << m_data;
	}

};



int main()
{
	HelloWorld hello;
	hello.print();


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}