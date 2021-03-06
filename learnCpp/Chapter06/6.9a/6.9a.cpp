// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>


std::string sortName(std::string *name, int length)
{
	for (int outIndex = 0; outIndex < (length - 1); ++outIndex)
	{
		for (int innerIndex = 0; innerIndex < (length - outIndex - 1); ++innerIndex)
			if (name[innerIndex] > name[innerIndex + 1])
			{
				std::swap(name[innerIndex], name[innerIndex + 1]);
			}
	}

	return *name;
}

int main()
{

	int howManyName;
	std::cout << "How many names would like to enter?";
	std::cin >> howManyName;

	std::string *name = new std::string[howManyName];

	int count = 0;

	for (; count < howManyName; count++)
	{
		std::cout << "Enter name  #" << count + 1 << ": ";
		std::cin >> name[count];
	}

	sortName(name, howManyName);

	std::cout << "Here is your sorted list:" << std::endl;
	
	for (int index = 0; index < howManyName; index++)
	{
		std::cout << "Name #" << index + 1 << ": " << name[index]  <<std::endl;
	}
     
	delete[] name; //almost forget!
	system("pause");

    return 0;

} 