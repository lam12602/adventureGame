#pragma once
#include"Creature.h"
#include <string>
#include<vector>
class Area;
class Player : public Creature
{
public:

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

};

