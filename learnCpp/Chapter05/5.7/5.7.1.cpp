// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{

	int number = 0;

	for (; number <= 20; number++)
	{
		if ((number % 2) == 0)
		{
			std::cout << number << " ";
		}
	}

	system("pause");

    return 0;

} 