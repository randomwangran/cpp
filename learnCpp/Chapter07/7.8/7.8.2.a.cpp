// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

typedef int(*arithmeticFcn)(int, int);

struct arithmeticStruct
{
	char op;
	arithmeticFcn funcPtr;
};

int main()
{


	system("pause");
	return 0;

}