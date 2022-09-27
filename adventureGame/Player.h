#pragma once
#include <string>
#include<vector>
class Player
{
public:
	int attack;
	int health;
	std::string description;
	std::string armour;
	std::vector<std::string> equipment;
	std::vector<std::string> inventory;
};

