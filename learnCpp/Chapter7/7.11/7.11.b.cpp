// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int sumOfNumber(int integer)
{
	if (integer < 10)
		return integer;
	else
		return sumOfNumber((integer - (integer % 10))/10) + integer%10;
}

int main()
{


	std::cout << sumOfNumber(357) << std::endl;
	std::cout << sumOfNumber(93427) << std::endl;



	system("pause");
	return 0;

}