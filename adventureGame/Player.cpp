#include "Player.h"

Player::Player()
:attack()
, health()
, description("")
, armour("")
, equipment({})
, inventory({})
, currentArea(nullptr)
{
}

Player::Player(int newAttack, int newHealth, std::string newDescription, std::string newArmour, std::vector<std::string> newEquipment, std::vector<std::string> newInventory, Area* newArea)
	:attack(newAttack)
	,health(newHealth)
	,description(newDescription)
	,armour(newArmour)
	,equipment(newEquipment)
	,inventory(newInventory)
	,currentArea(nullptr)
{
}
