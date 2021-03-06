#include "stdafx.h"
#include <iostream>
#include <string>

class Creature
{
private:
	std::string m_name;
	char m_symbol;
	int m_health;
	int m_attackDamage;
	int m_gold;
public:

	Creature(std::string name, char symbol, int health, int attackDamage, int gold)
		: m_name(name), m_symbol(symbol), m_health(health), m_attackDamage(attackDamage), m_gold(gold)
	{
	}

	const std::string& getName() { return m_name; }
	char getSymbol() { return m_symbol; }
	int getHealth() { return m_health; }
	int getAttackDamage() { return m_attackDamage; }
	int getGold() { return m_gold; }

	void reduceHealth(int reduce)
	{
		m_health -= reduce;
	}

	bool isDead()
	{
		if (m_health <= 0)
			return true;
	}

	void addGold(int gold)
	{
		m_gold += gold;
	}

	void levelUpDamage()
	{
		m_attackDamage += 1;
	}
};


class Player : public Creature
{
	int m_level = 1;
public:
	Player(std::string name, char symbol, int health, int attackDamage, int gold)
		: Creature(name, '@', 10, 1, 0)
	{
	}

	void levelUp()
	{
		m_level += 1;
		levelUpDamage();
	}

	int getLevel()
	{
		return m_level;
	}

	bool hasWon()
	{
		return m_level == 20;
	}
};

class Monster : public Creature
{
public:
	enum Type
	{
		TYPE_DRAGON,
		TYPE_ORC,
		TYPE_SLIME,
		TYPE_MAX
	};
};

int main()
{
	std::cout << "Enter your name: ";
	std::string userName;
	std::cin >> userName;

	Player player(userName, '@', 10, 1, 0);

	std::cout << "Welcome, " << player.getName() << std::endl;
	std::cout << "You have " <<  player.getHealth() << " health and are carrying " << player.getGold() << " gold.\n"; 

	system("pause");

	//std::cout << "Press enter to exit" << std::endl;
	//std::cin.get();

	return 0;
}