// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Advertising
{
	int ads;
	double percentage;
	double earnedPerAd;
};

void earnMoney(Advertising myAdvertise)
{
	std::cout << "You've earned " << myAdvertise.ads * myAdvertise.percentage * myAdvertise.earnedPerAd << std::endl;
}

int main()
{
	Advertising myAdvertise;
	std::cout << "Howe mnay ads you have shown to readers?" << std::endl;
	std::cin >> myAdvertise.ads;

	std::cout << "What percentage of ads were clicked on by users?" << std::endl;
	std::cin >> myAdvertise.percentage;

	std::cout << "How much you earned on average from each ad?" << std::endl;
	std::cin >> myAdvertise.earnedPerAd;
   
	earnMoney(myAdvertise);

	system("pause");

    return 0;
} 