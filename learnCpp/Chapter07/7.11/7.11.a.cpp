// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>


int factorial(int integer)
{
	if (integer == 0)
		return 1;
	else if (integer == 1)
		return 1;
	else
		return factorial(integer - 1) * integer;
}

int main()
{

	std::cout << factorial(2) << std::endl;
	std::cout << factorial(3) << std::endl;
	std::cout << factorial(4) << std::endl;




	system("pause");
	return 0;

}