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

	//  I am confused by my code.
	//  isEqual only have one input variable: Point3d &a
	//  How can it compare two instances?
	bool isEqual(Point3d &a) 
	{
		if (a.m_x == m_x && a.m_y == m_y && a.m_z == m_z)
			return true;
		else
			return false;
	}
};

int main()
{
	Point3d point1;
	point1.setValues(1.0, 2.0, 3.0);

	Point3d point2;
	point2.setValues(1.0, 2.0, 3.0);

	if (point1.isEqual(point2))
		std::cout << "point1 and point2 are equal\n";
	else
		std::cout << "point1 and point2 are not equal\n";

	Point3d point3;
	point3.setValues(3.0, 4.0, 5.0);

	if (point1.isEqual(point3))
		std::cout << "point1 and point3 are equal\n";
	else
		std::cout << "point1 and point3 are not equal\n";

	system("pause");
	return 0;

}