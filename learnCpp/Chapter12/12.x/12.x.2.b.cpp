#include "stdafx.h"
#include <string>
#include <iostream>

class Shape
{
public:
	virtual std::ostream& print(std::ostream &out) const = 0;
	friend std::ostream& operator<< (std::ostream &out, const Shape &shape)
	{
		return shape.print(out);
	}
	virtual ~Shape()
	{
	}
};

class Point
{
private:
	int m_x = 0;
	int m_y = 0;
	int m_z = 0;

public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	friend std::ostream& operator<<(std::ostream &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
		return out;
	}
};


class Triangle : public Shape
{
private:
	Point m_A;
	Point m_B;
	Point m_C;
public:
	Triangle(Point A , Point B, Point C): m_A(A), m_B(B), m_C(C)
	{
	}
	virtual std::ostream& print(std::ostream &out) const
	{
		return out << "Triangle" << m_A << ", " << m_B << ", " << m_C << ")";
	}
};

class Circle : public Shape
{
private:
	Point m_center;
	int m_radius;
public:
	Circle(Point center, int radius) : m_center(center), m_radius(radius)
	{
	}

	virtual std::ostream& print(std::ostream &out) const
	{
		return out << "Circle(" << m_center << ", " << m_radius <<")";
	}

};


int main()
{
	Point a(1, 2, 3);
	Circle c(Point(1, 2, 3), 7);
	std::cout << c << '\n';

	Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
	std::cout << t << '\n';

	system("pause");

	return 0;

}