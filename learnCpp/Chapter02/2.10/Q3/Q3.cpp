// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isGoodOperator(char operators)
{
	if (operators == '+')
		return true;
	if (operators == '-')
		return true;
	if (operators == '*')
		return true;
	if (operators == '/')
		return true;
	else
		return false;
}
int main()
{
	using namespace std;

	double inputA, inputB;
	char operater;

	cout << "Enter a double value";
	cin >> inputA;

	cout << "Enter a double value";
	cin >> inputB;

	cout << "Enter one of the following: +, -, *, /";
	cin >> operater;

	if (isGoodOperator(operater)) {
		if (operater == '+')
			cout << inputA << operater << inputB << "is" << inputA + inputB;
		if (operater == '-')
			cout << inputA << operater << inputB << "is" << inputA - inputB;
		if (operater == '*')
			cout << inputA << operater << inputB << "is" << inputA * inputB;
		if (operater == '/')
			cout << inputA << operater << inputB << "is" << inputA / inputB;
	}
	
	system("pause");

    return 0;
}