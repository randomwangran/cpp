// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int userInputFunction()
{
	while (true)
	{
		int userInput;
		std::cin >> userInput;
		if (std::cin.fail())
		{
			std::cin.clear(); // reset any error flags
			std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
		}

		if (userInput <= 9 && userInput >= 1)
			return userInput;
	}
}


int main()
{
	int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

	std::cout << "Enter a number between 1 and 9." << std::endl;

	std::cout << "The number of your input index is " << array[userInputFunction()];

	system("pause");

    return 0;

} 