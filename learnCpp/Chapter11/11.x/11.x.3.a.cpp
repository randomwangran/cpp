#include "stdafx.h"
#include <iostream>
#include <string>

class Creature
{
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

	std::string getName() { return m_name; }
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
};

int main()
{
	Creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.reduceHealth(1);
	std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n";

	//	system("pause");

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}