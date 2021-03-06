// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

class Ball
{
	std::string m_color ; 
	double m_radius ;

public:

	Ball(double b)
	{
		m_color = "Black";
		m_radius = b;
	}

	Ball(std::string a = "Black", double b = 10.0)
	{
		m_color = a;
		m_radius = b;
	}

	void print()
	{
		std::cout << "color: " << m_color << ", " << "radius: " << m_radius << std::endl;
	}
};


int main()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0); // why not working?
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	system("pause");
	return 0;

}