// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int outer = 1;
	while (outer <= 5)
	{
		int inner = 6;
		while (inner > outer)
		{
			std::cout << inner - outer << " ";
			inner--;
		}
		std::cout << "\n";
		++outer;
	}

	system("pause");

    return 0;

} 