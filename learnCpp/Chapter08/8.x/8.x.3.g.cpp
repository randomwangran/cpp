// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>


class Monster
{
public:
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

private:
	MonsterType m_type;
	std::string m_name;
	std::string m_roar;
	int m_hit;

public:
	Monster(Monster::MonsterType type, std::string name, std::string roar, int hit)
		: m_type(type), m_name(name), m_roar(roar), m_hit(hit) {}

	std::string getTypeString(Monster::MonsterType type)
	{
		switch (type)
		{
		case MONSTERTYPE_DRAGON:
			return "Dragon";
		case MONSTERTYPE_GOBLIN:
			return "Goblin";
		case MONSTERTYPE_ORC:
			return "Orc";
		case MONSTERTYPE_SKELETON:
			return "Skeleton";
		case MONSTERTYPE_TROLL:
			return "Troll";
		case MONSTERTYPE_VAMPIRE:
			return "Vampire";
		case MONSTERTYPE_ZOMBIE:
			return "Zombie";
		}
	}

	void print()
	{
		std::cout << m_name << " the " << getTypeString(m_type) << " has " << m_hit << " hit points and says " << m_roar << std::endl;
	}
};

class MonsterGenerator
{
public:

	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  
																					 
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}

	static Monster generateMonster()
	{
		return Monster(Monster::MONSTERTYPE_SKELETON, "Bones", "*rattle*", 4);
	}
};

int main()
{
	Monster m = MonsterGenerator::generateMonster();
	m.print();


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}