// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int sumTo(int a)
{
	int sum =0;  
	for (int add = 1; add <= a; add++)
	{
		sum = sum + add;
	}
	return  sum;
}

int main()
{

	std::cout << sumTo(5);

	system("pause");

    return 0;

} 