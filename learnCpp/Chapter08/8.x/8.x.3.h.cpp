// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

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
		static std::string s_names[6]{ "cfd", "jianshu", "yinwang", "liuxiang", "chexie", "bbs" };
		static std::string s_roars[6]{ "hahah", "wuwuw", "6666", "fffff", "lalala", "enmmmm" };
		return Monster(
			static_cast<Monster::MonsterType>(getRandomNumber(0, (Monster::MAX_MONSTER_TYPES - 1))),
			s_names[getRandomNumber(0, 5)],
			s_roars[getRandomNumber(0, 5)],
			getRandomNumber(1, 100));
	}
};

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();
	Monster m = MonsterGenerator::generateMonster();
	m.print();


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}