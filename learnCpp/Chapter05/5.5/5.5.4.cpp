// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int outer = 1;
	while (outer <= 5)
	{
		// loop between 1 and outer
		int inner = 5, counter = 1;
		while (counter <= 5)
		{
			if ((inner - outer) > 0)
				std::cout << " " << " ";
			else
				std::cout << inner << " ";
			inner--;
			counter++;
		}

		// print a newline at the end of each row
		std::cout << "\n";
		++outer;
	}

	system("pause");

    return 0;

} 