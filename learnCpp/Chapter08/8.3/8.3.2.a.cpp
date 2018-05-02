// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Point3d
{
	double m_x;
	double m_y;
	double m_z;

public:
	void setValues(double a, double b, double c)
	{
		m_x = a;
		m_y = b;
		m_z = c;
	}

	void print()
	{
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << std::endl;
	}
};

int main()
{
	Point3d point;
	point.setValues(1.0, 2.0, 3.0);
	point.print();

	system("pause");
	return 0;

}