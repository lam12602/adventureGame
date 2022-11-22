#pragma once
#include <string>
#include<vector>
class Area;
class Player
{
public:

	Player();

	Player(int newAttack, int newHealth, std::string newDescription, std::string newArmour, std::vector<std::string> newEquipment, std::vector<std::string> newInventory, Area* newArea);


private:
	int attack;
	int health;
	std::string description;
	std::string armour;
	std::vector<std::string> equipment;
	std::vector<std::string> inventory;
	Area* currentArea;

};

