// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cassert>
#include <array>

class Mystring
{
	std::string m_string;
public:
	Mystring() {}
	Mystring(std::string string): m_string(string) {}

	std::string operator()(int startIndex, int returnIndex);
};

//void Mystring::operator()(int startIndex, int returnIndex)
std::string Mystring::operator()(int startIndex, int returnIndex)
{
	Mystring substring;

	for (int index = 0; index < returnIndex; ++index)
		substring.m_string += m_string.at(startIndex + index);

	return substring.m_string;
//	std::cout << substring.m_string.at(0);

}

int main()
{
	Mystring string("Hello, world!");

	std::cout << string(7, 5) <<std::endl; // start at index 7 and return 5 characters


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();


	return 0;
}