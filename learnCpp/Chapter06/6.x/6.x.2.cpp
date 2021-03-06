// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

struct Student
{
	std::string name;
	int grade;
};


int main()
{
	std::cout << "How many students you want to enter?" << std::endl;
	int userInput;
	std::cin >> userInput;

	Student *array = new Student[userInput];

	for (int count = 0; count < userInput; count++)
	{
		std::cout << "Please enter name #" << count + 1 << std::endl;
		std::cin >> array[count].name;
		std::cout << "Please enter " << array[count].name << "'s grade: " << std::endl;
		std::cin >> array[count].grade;
	}

	//array[0] = { "Ran Wang", 100 };

	for (int outIndex = 0; outIndex < (userInput - 1); ++outIndex)
	{
		for (int innerIndex = 0; innerIndex < (userInput - outIndex - 1); ++innerIndex)
			if (array[innerIndex].grade < array[innerIndex + 1].grade)
				std::swap(array[innerIndex], array[innerIndex + 1]);
	}

	for (int count = 0; count < userInput; count++)
	{
		std::cout << array[count].name << " got a grade of " << array[count].grade << std::endl;
	}

	delete[] array; //forget the second time;

	system("pause");
	return 0;

}