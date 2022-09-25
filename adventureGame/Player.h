#pragma once
#include <string>
class Player
{
public:
	int attack;
	int health;
	std::string description;
	std::string armour;
	std::string equipment{};
	std::string inventory{};
};

