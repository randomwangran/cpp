
// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace ANIMALS
{
	enum Animals
	{
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE
	};
}


int main()
{
	int legs[6] = { 2,4,4,4,2,0 };

	ANIMALS::Animals elephant = ANIMALS::ELEPHANT;

	std::cout << "An elephant has " << legs[elephant] << std::endl;
	system("pause");

    return 0;

} 
