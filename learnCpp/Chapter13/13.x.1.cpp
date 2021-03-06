#include "stdafx.h"
#include <string>
#include <iostream>

template <class T>
class Pair1 
{
private:
	T m_a;
	T m_b;

public:
	Pair1(T a, T b) : m_a(a), m_b(b)
	{
	}

	T first()
	{
		return m_a;
	}

	T second()
	{
		return m_b;
	}

	T first() const
	{
		return m_a;
	}

	T second() const
	{
		return m_b;
	}

};

int main()
{

	Pair1<int> p1(5, 8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(2.3, 4.5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	system("pause");
	return 0;

}