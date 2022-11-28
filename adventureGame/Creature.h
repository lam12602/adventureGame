#pragma once
#include <iostream>
#include<string>
#include "Thing.h"
class Creature : public Thing
{
public:
	Creature();

protected:
	int health;
	int damage;
};

