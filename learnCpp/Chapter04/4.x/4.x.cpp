// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


enum class MonsterType
{
	OGRE,
    DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};

void printMonster(Monster a)
{
	switch (a.type)
	{
	case MonsterType::OGRE:
		std::cout << "This Ogre is name " << a.name << " and has " << a.health << " health." << std::endl;
		break;
	case MonsterType::DRAGON:
		std::cout << "This Dragon is name " << a.name << " and has " << a.health << " health." << std::endl;
		break;
	case MonsterType::ORC:
		std::cout << "This Orc is name " << a.name << " and has " << a.health << " health." << std::endl;
		break;
	case MonsterType::GIANT_SPIDER:
		std::cout << "This giant spider is name " << a.name << " and has " << a.health << " health." << std::endl;
		break;
	case MonsterType::SLIME:
		std::cout << "This Slime is name " << a.name << " and has " << a.health << " health." << std::endl;
		break;
	}
}

int main()
{

	Monster a = { MonsterType::OGRE, "Torg", 145 };
	Monster b = { MonsterType::SLIME, "Blurp", 23 };

	printMonster(a);
	printMonster(b);

	system("pause");

    return 0;

} 