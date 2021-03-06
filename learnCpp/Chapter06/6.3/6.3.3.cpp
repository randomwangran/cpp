// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>




int main()
{
	int scores[] = { 84, 92, 76, 81, 56, 99 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);

	int maxScore = 0; // keep track of our largest score
	int maxIndex = 0;
	// now look for a larger score
	for (int student = 0; student < numStudents; ++student)
		if (scores[student] > maxScore)
		{
			maxIndex = student;
			maxScore = scores[student];
		}

	std::cout << "The best score was " << maxScore << '\n';
	std::cout << "The best score was " << scores[maxIndex] << '\n';

	system("pause");

    return 0;

} 