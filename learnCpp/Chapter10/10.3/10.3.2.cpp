#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

class Teacher
{
private:
	std::string m_name;

public:
	Teacher(std::string name)
		: m_name(name)
	{
	}

	std::string getName() { return m_name; }
	//void printName() { std::cout << m_name; }
};

class Department
{
private:
	std::vector<Teacher> m_teacher;

	//Teacher *m_teacher; // This dept holds only one teacher for simplicity, but it could hold many teachers
	//int m_howManyTeacher = 0;
public:
	Department()
	{
	}

	void add(Teacher *t)
	{
		m_teacher.push_back(t->getName());
	}

	friend std::ostream& operator<< (std::ostream &out, Department &dep);

};

std::ostream& operator<< (std::ostream &out, Department &dep)
{
	std::cout << "Department: ";
	for (auto&element : dep.m_teacher)
		std::cout << element.getName() << ' ';
	std::cout << std::endl;
	return out;
}

int main()
{
	// Create a teacher outside the scope of the Department
	Teacher *t1 = new Teacher("Bob"); // create a teacher
	Teacher *t2 = new Teacher("Frank");
	Teacher *t3 = new Teacher("Beth");

	{
		// Create a department and use the constructor parameter to pass
		// the teacher to it.
		Department dept; // create an empty Department
		dept.add(t1);
		dept.add(t2);
		dept.add(t3);

		std::cout << dept;

	} // dept goes out of scope here and is destroyed

	std::cout << t1->getName() << " still exists!\n";
	std::cout << t2->getName() << " still exists!\n";
	std::cout << t3->getName() << " still exists!\n";

	delete t1;
	delete t2;
	delete t3;


    //	system("pause");

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}
