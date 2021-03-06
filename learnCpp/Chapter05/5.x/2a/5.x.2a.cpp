// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include <ctime>

void information()
{
	std::cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.";
}

int getUserInput(int count)
{
	int userInput;
	std::cout << "Guess # " << count << ": ";
	std::cin >> userInput;
	return  userInput;
}

int getUserInitalInput()
{
	int userInput;
	std::cout << "Guess #1: ";
	std::cin >> userInput;
	return  userInput;
}

int getRandomNumber(int min, int max)
{
	static std::mt19937 mersenne(static_cast<unsigned int>(time(0))); 
	static const double fraction = 1.0 / (mersenne.max() + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

bool isGaussCorrect(int target, int userInput)
{
	if (target == userInput)
		return true;
	else
		return false;
}

void guessHighOrLow(int userInput, int target)
{
	if (userInput < target)
		std::cout << "Your guess is too low." << std::endl;
	else
		std::cout << "Your guess is too high." << std::endl;
}


int main()
{
	information();

	int target = getRandomNumber(1, 100);
	int userInput = getUserInitalInput();
	int counter = 1;
	bool trueFlag = false;

	if (!(isGaussCorrect(target, userInput)))
	{
		do
		{
			if (isGaussCorrect(target, userInput))
			{
				trueFlag = true;
				break;
			}
			else
			{
				guessHighOrLow(userInput, target);
				counter++;
				userInput = getUserInput(counter);
			}
		} while (counter < 7);
		
			if (trueFlag)
				std::cout << "Correct! You win! " << std::endl;
			else
				std::cout << "Sorry, you lose. The correct number is " << target << std::endl;
	}
	else
	{
		std::cout << "Correct! You win! " << std::endl;
	}

	system("pause");

    return 0;

} 