// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include <string>


class ParentA {
public: ParentA() {}
		std::string m_name;

		std::string getName() const { return m_name; }
};

class ParentB {
public: ParentB() {}

		void functionParentB() {
			std::cout << "I am a child of B" << std::endl;
		}
};

class childA : public ParentA {
public:

	int ChildA() {}

};

class childB : public ParentB {
public:

	int ChildB() {}

};

int main() {

	childA lucifer;
	childB angela;

	lucifer.m_name = "Lucifer";

	std::cout << lucifer.getName() << '\n';

	std::cout << "Hello world!" << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
