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

void Player::DealDamage(int damageToDeal)
{
	currentHealth -= damageToDeal;
}

Area* Player::GetCurrentArea()
{
	return currentArea;
}

int Player::GetAttack()
{
	return attack;
}

bool Player::GetAlive()
{
	return currentHealth > 0;
}

void Player::SetCurrentArea(Area* newCurrentArea)
{
	currentArea = newCurrentArea;
}
