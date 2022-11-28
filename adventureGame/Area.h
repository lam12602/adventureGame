#pragma once
#include<iostream>
#include<string>
#include"Thing.h"

class Player;

class Monster;

class Area : public Thing
{
public:

	@@ - 16, 11 + 17, 23 @@ class Area

		// Actions
		Area(std::string newName, std::string newDescription);
		
	void LookAtContents(std::string target);
	void Go(Player* thePlayer, std::string target);
	void AttackContents(std::string target, Player* thePlayer);

	// Setup
	void AddExit(Area* exitToAdd);
	void AddMonster(Monster* monsterToAdd);

	// Getters
	std::string GetName();

private:

	// Data
	std::string name;
	std::string description;
	std::vector<Area*> exits;
	std::vector<Monster*> monsters;
};


