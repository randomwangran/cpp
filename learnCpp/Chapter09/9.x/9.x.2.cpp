// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cassert>
#include <array>

class Averaged
{
	int32_t m_sum ;
	int8_t  m_number;

public:
	Averaged(int32_t sum = 0, int8_t number = 0): m_sum(sum), m_number(number) {}

	int32_t getSum()  { return m_sum; }
	int32_t getNum()  { return m_number; }

	Averaged& operator+=(const Averaged &avg);
	
	friend std::ostream& operator<< (std::ostream &out, const Averaged &avg);
	
};

Averaged& Averaged::operator+=(const Averaged &avg)
{
	this->m_sum += avg.m_sum;
	this->m_number += (avg.m_number+1); // how to improve this +1??

	return *this;
}

std::ostream& operator<< (std::ostream &out, const Averaged &avg)
{
	out << static_cast<double>(avg.m_sum) / static_cast<double>(avg.m_number);

	return out;
}

int main()
{
	Averaged avg;

	avg += 4;
	std::cout << avg << '\n'; // 4 / 1 = 4

	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6

	avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

	Averaged copy = avg;
	std::cout << copy << '\n';
	
	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();


	return 0;
}