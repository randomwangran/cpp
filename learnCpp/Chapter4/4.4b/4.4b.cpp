// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	
	std::cout << "Enter your full name: ";
	std::string name;
	std::getline(std::cin, name);

	std::cout << "Enter your age: ";
	double age;
	std::cin >> age;
	std::cin.ignore(32767, '\n');

	std::cout << "You've lived " <<   age / name.length() << "years for each letter in your name.";

	system("pause");

    return 0;
} 