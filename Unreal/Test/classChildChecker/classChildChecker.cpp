// classChildChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h" // what's this headfile?
#include <iostream>
#include <string>
#include <type_traits>

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

		std::string m_name;
		
		std::string getName() const { return m_name; }

		void functionParentB() {
			std::cout << "I am a child of B" << std::endl;
		}
};

class childA : public ParentA {
public:

	int ChildA() {}

	void printNameInChild() {

		std::cout << "This is a message from child A" << std::endl;
	}


};

class childB : public ParentB {
public:

	int ChildB() {}

	void printNameInChild() {

		std::cout << "This is a message from child B" << std::endl;
	}


};

int main() {

	childA lucifer;
	childB angela;

	lucifer.m_name = "Lucifer";
	angela.m_name = "Angela";

	//lucifer.printName();
	lucifer.printNameInChild();
	angela.printNameInChild();

	std::cout << std::is_base_of_v<ParentA, decltype(angela)> << '\n';
	std::cout << std::is_base_of_v<ParentA, decltype(lucifer)> << '\n';
	std::cout << std::is_base_of_v<ParentB, decltype(angela)> << '\n';
	std::cout << std::is_base_of_v<ParentB, decltype(lucifer)> << '\n';



	// how to writer a if-else statement to determine one child is a child of a particular parent?
	
}

/* notes

Why Shift + F11 cannot jump back out the entry point?

For example, if the cursor is on 


    getName(), then press 'F11', I go to its definition,

    but, I want goback by pressing 'Shift+F11', but not work.

	I guess, its the issue with my emacs kbd set for VS.

	In exploring, I found that "Alt + F11", which is peak definition.

	It is more handy.
  */