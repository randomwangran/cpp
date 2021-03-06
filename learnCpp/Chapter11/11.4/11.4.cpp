#include "stdafx.h"
#include <iostream>
#include <string>


class Fruit
{
	std::string m_name;
	std::string m_color;
public:

	Fruit(std::string name, std::string color) : m_name(name), m_color(color)
	{
	}

	std::string getName() const { return m_name; }
	std::string getColor() const { return m_color; }

};

class Apple : public Fruit
{
	double m_fiber;
public:
	Apple(std::string name, std::string color, double fiber) : Fruit(name, color), m_fiber(fiber)
	{
	}

	friend std::ostream& operator<< (std::ostream &out, const Apple &apple)
	{
		out << "Apple(" << apple.getName() << ", " << apple.getColor() << ", " << apple.m_fiber << ")" << std::endl;
		return out;
	}
};

class Banana : public Fruit
{
public:
	Banana(std::string name, std::string color) : Fruit(name, color)
	{
	}

	friend std::ostream& operator<< (std::ostream &out, const Banana &banana)
	{
		out << "Banana(" << banana.getName() << ", " << banana.getColor() << ")" << std::endl;
		return out;
	}

};

int main()
{
	const Apple a("Red delicious", "red", 4.2);
	std::cout << a;

	const Banana b("Cavendish", "yellow");
	std::cout << b;
	
    //	system("pause");

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}