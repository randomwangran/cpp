// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>


enum MonsterType
{
	MONSTERTYPE_DRAGON,
	MONSTERTYPE_GOBLIN,
	MONSTERTYPE_ORC,
	MONSTERTYPE_SKELETON,
	MONSTERTYPE_TROLL,
	MONSTERTYPE_VAMPIRE,
	MONSTERTYPE_ZOMBIE,
	MAX_MONSTER_TYPES
};



int main()
{


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}