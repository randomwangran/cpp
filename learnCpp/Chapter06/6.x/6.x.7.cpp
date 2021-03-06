// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <random>
#include <ctime>

//#include <string>

enum Ranks
{
	RANK_ACE,
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_JACK,
	RANK_QUEEN,
	RANK_KING,
	RANK_MAX
};

enum Suits
{
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_HEARTS,
	SUIT_SPADES,
	SUIT_MAX
};

struct Card
{
	Ranks ranks;
	Suits suits;
};

void printCard(const Card &card)
{
	switch (card.ranks)
	{
	case RANK_ACE:
		std::cout << "A";
		break;
	case RANK_2:
		std::cout << "2";
		break;
	case RANK_3:
		std::cout << "3";
		break;
	case RANK_4:
		std::cout << "4";
		break;
	case RANK_5:
		std::cout << "5";
		break;
	case RANK_6:
		std::cout << "6";
		break;
	case RANK_7:
		std::cout << "7";
		break;
	case RANK_8:
		std::cout << "8";
		break;
	case RANK_9:
		std::cout << "9";
		break;
	case RANK_10:
		std::cout << "1";
		break;
	case RANK_JACK:
		std::cout << "J";
		break;
	case RANK_QUEEN:
		std::cout << "Q";
		break;
	case RANK_KING:
		std::cout << "K";
		break;
	}

	switch (card.suits)
	{
	case SUIT_CLUBS:
		std::cout << "C";
		break;
	case SUIT_DIAMONDS:
		std::cout << "D";
		break;
	case SUIT_HEARTS:
		std::cout << "H";
		break;
	case SUIT_SPADES:
		std::cout << "S";
		break;
	}

}

void printDeck(const std::array<Card, 52> &deck)
{
	for (const auto &number : deck)
	{
		printCard(number);
		std::cout << std::endl;
	}
}

void swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}

int getRandomNumber(int min, int max)
{
	static std::mt19937 mersenne(static_cast<unsigned int>(time(0)));
	static const double fraction = 1.0 / (mersenne.max() + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

void shuffleDeck(std::array<Card,52> &deck)
{
	for (auto &element : deck)
	{
		int aRandomNumber = getRandomNumber(1, 52);
		swapCard(element, deck[aRandomNumber-1]);
	}

}

int getCardValue(Card a) 
{
	switch (a.ranks)
	{
	case RANK_ACE:
		return 11;
	case RANK_2:
	case RANK_3:
	case RANK_4:
	case RANK_5:
	case RANK_6:
	case RANK_7:
	case RANK_8:
	case RANK_9:
		return static_cast<int>(a.ranks + 1);
	case RANK_10:
	case RANK_JACK:
	case RANK_QUEEN:
	case RANK_KING:
		return 10;
	}
}


bool playBlackjack(std::array<Card, 52> &a)
{
	Card *ptr = &a[0];

	int playerValue = 0;
	int dealerValue = 0;

	dealerValue = dealerValue + getCardValue(*ptr++);
	playerValue = playerValue + getCardValue(*ptr++) + getCardValue(*ptr++);

	std::cout << "Your current value is: " << playerValue << std::endl;
	std::cout << "Dealer current value is: " << dealerValue << std::endl;

	int userInput(0);
	std::cout << "Do you want hit[0] or stand[1]?" << std::endl;
	std::cin >> userInput;

	while (userInput == 0)
	{
		tryAgain:
		std::cout << "Do you want hit[0] or stand[1]?" << std::endl;
		std::cin >> userInput;

		if (userInput == 1)
			break;

		playerValue = playerValue + getCardValue(*ptr++);

		if (playerValue > 21)
		{
			std::cout << "Your final value is: " << playerValue << std::endl;
			std::cout << "Dealer final value is: " << dealerValue << std::endl;
			return false;
		}
		else
		{
			if (dealerValue < 17)
			{
				dealerValue = dealerValue + getCardValue(*ptr++);
				if (dealerValue > 21)
				{
					std::cout << "Your final value is: " << playerValue << std::endl;
					std::cout << "Dealer final value is: " << dealerValue << std::endl;
					return true;
				}
				else
					goto tryAgain;
			}
			else
			{
				if (playerValue > dealerValue)
				{
					std::cout << "Your final value is: " << playerValue << std::endl;
					std::cout << "Dealer final value is: " << dealerValue << std::endl;
					return true;
				}
				else
				{
					std::cout << "Your final value is: " << playerValue << std::endl;
					std::cout << "Dealer final value is: " << dealerValue << std::endl;
					return false;
				}
			}
		}
	}

	while (dealerValue < 17)
	{
		dealerValue = dealerValue + getCardValue(*ptr++);
		if (dealerValue > 21)
		{
			std::cout << "Your final value is: " << playerValue << std::endl;
			std::cout << "Dealer final value is: " << dealerValue << std::endl;
			return true;
		}
	}

	if (playerValue > dealerValue)
	{
		std::cout << "Your final value is: " << playerValue << std::endl;
		std::cout << "Dealer final value is: " << dealerValue << std::endl;
		return true;
	}
	else
	{
		std::cout << "Your final value is: " << playerValue << std::endl;
		std::cout << "Dealer final value is: " << dealerValue << std::endl;
		return false;
	}
}

int main()
{
	std::array<Card, 52> deck ;

	int card = 0;
	for (int iniSuits = 0; iniSuits < SUIT_MAX; ++iniSuits)
	{
		for (int iniRanks = 0; iniRanks < RANK_MAX; ++iniRanks)
		{
			deck[card].ranks = static_cast<Ranks>(iniRanks);
			deck[card].suits = static_cast<Suits>(iniSuits);
			++card;
		}
	}
		
	printDeck(deck);
	std::cout << "=======================";
	shuffleDeck(deck);
	printDeck(deck);
	
	if (playBlackjack(deck))
		std::cout << "You win!";
	else
		std::cout << "You lose.";
	
	system("pause");
	return 0;

}