// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include <string>


class ParentA {

public: ParentA() {}

		std::string m_name;

		std::string getName() const { return m_name; }

		void printName() const {
		
			std::cout << "I am a child of A." << std::endl;

		}
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

	void printNameInChild() {

		std::cout << "This is a printe from child" << std::endl;
	}

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

	//lucifer.printName();
	lucifer.printNameInChild();

	std::cout << "Hello world!" << std::endl;
}
