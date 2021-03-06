// 5.x.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "myConstant.h"

double userInputHeight()
{
	int height;
	std::cout << "Enter a height:";
	std::cin >> height;

	return height;
}

double calculateLocation(int time, double height)
{
	return height - myConstants::gravity_constant * time * time / 2;
}

bool isBallOnGround(double a)
{
	if (a <= 0)
		return true;
	else
		return false;
}

int main()
{
	double userInput;
	userInput = userInputHeight();

	int time = 0;

	while (!isBallOnGround(calculateLocation(time,userInput))) {
		std::cout << "At " << time << " seconds, the ball is at height : " << calculateLocation(time, userInput) << "meters" << std::endl;
		time++;
	}

	std::cout << "At " << time << " seconds, the ball is on the ground" << std::endl;

	system("pause");
    return 0;
}