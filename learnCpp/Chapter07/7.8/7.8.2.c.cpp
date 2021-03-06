// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>

int userIntInput()
{
	std::cout << "Enter a integer:" << std::endl;
	int a;
	std::cin >> a;
	return a;
}

char userCharInput()
{
	char a;

	do
	{
		std::cout << "Enter a mathematical operation ('+','-','*','/')";
		std::cin >> a;
	} while (!(a == '+' || a == '-' || a == '*' || a == '/'));

	return a;
}

int add(const int a, const int b)
{
	return a + b;
}

int subtract(const int a, const int b)
{
	return a - b;
}

int multiply(const int a, const int b)
{
	return a * b;
}

int divide(const int a, const int b)
{
	return a / b;
}

typedef int(*arithmeticFcn)(int, int);

struct arithmeticStruct
{
	char op;
	arithmeticFcn funcPtr;
};

/*
arithmeticStruct addStruture = {'+', add};
arithmeticStruct subStruture = {'-', subtract};
arithmeticStruct mulStruture = {'*', multiply};
arithmeticStruct divStruture = {'/', divide};
*/

//static std::array<arithmeticStruct, 4> = { addStruture, subStruture, mulStruture, divStruture };
 
//arithmeticStruct a = { '+',add };
//std::array <int, 4> a{ 1,12,3,4 }; 
//std::array <arithmeticStruct, 4> arithmeticArray{ { '+',add },{ '-', subtract },{ '*', multiply },{ '/', divide } };

/*
static std::array <arithmeticStruct, 4> arithmeticArray[]{ { '+',add },{ '-', subtract },{ '*', multiply },{ '/', divide } };


static arithmeticStruct arithmeticArray[]{
	{ '+', add },
{ '-', subtract },
{ '*', multiply },
{ '/', divide }
};
*/

static std::array<arithmeticStruct, 4> arithmeticArray = { arithmeticStruct{ '+', add }, arithmeticStruct{ '-', subtract }, arithmeticStruct{ '*', multiply }, arithmeticStruct{ '/', divide } };


// This is really strange to me.
// When you use std::arrary to define a array using a user-defined structure, the user must declare
// the array using this format:  array[].

arithmeticFcn getArithemeticFunction(char a)
{
	for (auto &element : arithmeticArray)
	{
		if (element.op == a)
			return element.funcPtr;
	}
}


int main()
{

	char op;
	int a, b;
	a = userIntInput();
	op = userCharInput();
	b = userIntInput();

	std::cout << getArithemeticFunction(op)(a, b);


	system("pause");
	return 0;

}