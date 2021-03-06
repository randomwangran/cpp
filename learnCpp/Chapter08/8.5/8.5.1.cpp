// ConsoleApplication4.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>

class Ball
{
	std::string m_color ; // why Black is necessary?
	double m_radius ;

public:
	Ball()
	{
		m_color = "Black";
		m_radius = 10.0;
	}
	Ball(std::string a)
	{
		m_color = a;
		m_radius = 10.0;
	}

	Ball(double a)
	{
		m_color = "black";
		m_radius = a;
	}

	Ball(std::string a, double b)
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

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	system("pause");
	return 0;

}