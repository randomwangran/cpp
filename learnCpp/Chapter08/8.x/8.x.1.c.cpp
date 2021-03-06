// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cmath>

class Point2d
{
	double m_x;
	double m_y;

public:
	Point2d(double x = 0.0, double y = 0.0) : m_x(x), m_y(y) {}

	void print()
	{
		std::cout << "Point2d(" << m_x << ", " << m_y << ");" << std::endl;
	}

	friend double distanceFrom(Point2d &a, Point2d &b);
};

double distanceFrom(Point2d &a, Point2d &b)
{
	return (sqrt((a.m_x - b.m_x)*(a.m_x - b.m_x) + (a.m_y - b.m_y)*(a.m_y - b.m_y)));
}
int main()
{
	Point2d first;
	Point2d second(3.0, 4.0);
	first.print();
	second.print();

    std::cout << "Distance between two points: " << distanceFrom(first,second) << '\n';
	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}