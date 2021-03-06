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

int main()
{
	std::array<Card, 52> deck ;

/*
	for (int iniSuits = 0; iniSuits < SUIT_MAX; ++iniSuits)
	{
		for (int iniRanks = 0; iniRanks < RANK_MAX; ++iniRanks)
		{
			deck[iniSuits * 13 + iniRanks].ranks = static_cast<Ranks>(iniRanks);
			deck[iniSuits * 13 + iniRanks].suits = static_cast<Suits>(iniSuits);
		}
	}
*/ // This is my solution without using increaments of deck index.
   // This is not a good code, because I use magic number 13.

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
		
//	printDeck(deck);	

//	swapCard(deck[0], deck[1]);

//	shuffleDeck(deck);

//	printCard(deck[0]);
//	std::cout<<"Card value is " <<getCardValue(deck[0]);

	system("pause");
	return 0;

}