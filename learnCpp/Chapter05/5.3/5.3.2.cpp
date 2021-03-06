// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum class Animal
{
	PIG,
    CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH
};

std::string getAnimalName(Animal a)
{
	switch (a)
	{
	case Animal::PIG:
		return "pig";
		break;

	case Animal::CHICKEN:
		return "chicken";
		break;

	case Animal::CAT:
		return "cat";
		break;

	case Animal::DOG:
		return "dog";
		break;

	case Animal::OSTRICH:
		return "ostrich";
		break;
	default:
		std::cout << "getAnimalName(): Unhandled case \n";
	}
}

int printNumberOfLegs(Animal a)
{
	switch (a)
	{
	case Animal::PIG:
		return 4;
		break;

	case Animal::CHICKEN:
		return 2;
		break;

	case Animal::CAT:
		return 4;
		break;

	case Animal::DOG:
		return 4;
		break;

	case Animal::OSTRICH:
		return 2;
		break;
	default:
		std::cout << "printNumberOfLegs(): Unhandled case \n";
	}
}


int main()
{
	Animal cat = Animal::CAT;
	Animal chicken = Animal::CHICKEN;
	
	std::cout << "A " << getAnimalName(cat) << " has " << printNumberOfLegs(cat) << " legs." << std::endl;
	std::cout << "A " << getAnimalName(chicken) << " has " << printNumberOfLegs(chicken) << " legs." << std::endl;

	system("pause");

    return 0;

} 