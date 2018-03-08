// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	std::string name[] = {
		"Alex", 
		"Betty", 
		"Caroline", 
		"Dave", 
		"Emily", 
		"Fred", 
		"Greg",
		"Holly"
	};

	std::cout << "Enter a name:"  ;
	std::string userInput;
	std::cin >> userInput;

	for (const auto &individual : name)
	{
		if (individual == userInput)
		{
			std::cout << individual << " is found.";
			break;
		}
		else
		{
			std::cout << userInput << " is not found.";
			break;
		}
	}


	system("pause");
    return 0;

} 