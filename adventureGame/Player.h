#pragma once
#include"Creature.h"
#include <string>
#include<vector>

class Area;
class Player : public Creature
{
public:

	Player();
	Player(int newAttack, int newHealth, std::string newDescription, std::string newArmour, std::vector<std::string> newEquipment, std::vector<std::string> newInventory, Area* newArea)

	void Look();
	void DealDamage(int damageToDeal);

	// Getters
	Area* GetCurrentArea();
	int GetAttack();
	bool GetAlive();

	// Setters
	void SetCurrentArea(Area* newCurrentArea);

private:

	// Data
	std::string name;
	int attack;
	int health;
	std::string description;
	std::string armour;
	std::vector<std::string> equipment;
	std::vector<std::string> inventory;
	Area* currentArea;
};

