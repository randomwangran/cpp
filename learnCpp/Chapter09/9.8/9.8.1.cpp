// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

struct StudentGrade
{
	std::string name;
	char grade;
};

class GradeMap
{
	std::vector<StudentGrade> m_map;

public:
	GradeMap() {}

	char& operator[] (std::string a); // better to use const std::string &a
};

char& GradeMap::operator[] (std::string a)
{
	for (int index = 0; index < m_map.size(); ++index)
	{
		if ( m_map[index].name == a)
			return m_map[index].grade;
	} 
	//// this for loop can be written as the following c++11 syntax:
	//for (auto &element : m_map)
	//{
	//	if (element.name == a)
	//		return element.grade;
	//}

	m_map.push_back({ a,' ' });
	return m_map.back().grade;
}
int main()
{
	GradeMap grades;
	grades["Joe"] = 'A';
	grades["Frank"] = 'B';
	std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
	std::cout << "Frank has a grade of " << grades["Frank"] << '\n';


	std::cout << "Press enter to exit" << std::endl;
	//system("pause");
	std::cin.get();


	return 0;
}