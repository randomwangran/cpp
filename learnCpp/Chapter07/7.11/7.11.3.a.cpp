// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int convertBinary(int a)
{
	if (a == 0)
	{
		std::cout << a;
		return 0;
	}

	else if (a == 1)
	{
		std::cout << a;
		return 1;
	}

	else
	{
		if (a % 2 == 1)
		{
			std::cout << "1";
			return convertBinary(a / 2);
		}
		else
		{
			std::cout << "0";
			return convertBinary(a / 2);
	
		}
	}
		
}

int main()
{
	convertBinary(6);

	system("pause");
	return 0;

}

// unable to reverse print order.