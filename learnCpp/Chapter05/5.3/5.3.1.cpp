// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int calculator(int a, int b, char op)
{
	switch (op)
	{
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return a / b;
		break;
	case '%':
		return a % b;
		break;
	}
	// to improve:
	/* default:
	   std::cout << "Error input";*/
}

bool isGoodOperator(char a)
{
	if (a == '+' || a == '-' || a =='*' || a=='/' || a=='%')
		return true;
	else
		return false;
}

int main()
{
	int a, b;
	char op;
	std::cout << "Enter a number: ";
	std::cin >> a;

	std::cout << "Enter another number: ";
	std::cin >> b;

	std::cout << "Enter an operator: ";
	std::cin >> op;

	if (isGoodOperator(op))
		std::cout << a << op << b << "is: " << calculator(a, b, op);
	else
		std::cout << "Error input";

	system("pause");

    return 0;

} 