// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>


int main()
{
	const int length(9);
	int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	for (int i = 0; i < length; i++)
		std::cout << array[i];
	std::cout << std::endl;

	for (int outIndex = 0; outIndex < (length -1); ++outIndex)
	{
		bool sortedFlag = true;
		for (int innerIndex = 0; innerIndex < (length - outIndex - 1); ++innerIndex)
			if (array[innerIndex] > array[innerIndex + 1])
			{
				std::swap(array[innerIndex], array[innerIndex + 1]);
				sortedFlag = false;
			}
		if (sortedFlag)
		{
			std::cout << "Early termination on iteration " << outIndex + 1 << std::endl;
			break;
		}

	}

	for (int i = 0; i < length; i++)
		std::cout << array[i];

	system("pause");

    return 0;

} 