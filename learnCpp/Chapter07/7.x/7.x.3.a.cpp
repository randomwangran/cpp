// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int binarySearch(int *array, int target, int min, int max)
{
	int centerIndex = (max + min) / 2;
	//bool isElementExist = false;

	while (array[centerIndex] != target && (max > min))
	{
		int centerIndex = (max + min) / 2 ;

		if (array[centerIndex] > target)
			max = centerIndex;
		else if (array[centerIndex] < target)
			min = centerIndex+1;
		else
			return centerIndex;
	}

	return -1;
}

int main()
{
	int array[] = { 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };

	const int numTestValues = 9;
	// Here are the test values
	int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49 };
	// And here are the expected results for each value
	int expectedValues[numTestValues] = { -1, 0, 3, -1, -1, 8, -1, 13, -1 };

	// Loop through all of the test values
	for (int count = 0; count < numTestValues; ++count)
	{
		// See if our test value is in the array
		int index = binarySearch(array, testValues[count], 0, 14);
		// If it matches our expected value, then great!
		if (index == expectedValues[count])
			std::cout << "test value " << testValues[count] << " passed!\n";
		else // otherwise, our binarySearch() function must be broken
			std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
	}

	//std::cout << binarySearch(array, 1, 0, 14);

	system("pause");
	return 0;

}