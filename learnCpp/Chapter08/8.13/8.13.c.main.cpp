// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Vector3d.h"
#include "Point3d.h"


int main()
{

	Point3d p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);

	p.print();
	p.moveByVector(v);
	p.print();

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}