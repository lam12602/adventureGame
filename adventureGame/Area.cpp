#include "Area.h"
#include <iostream>
#include<string>
#include<vector>

Area::Area()
	:name("")
	, description("")
	, connectingAreas()
	, exits()
{
}

void Area::look()
{
	std::cout << "The area you are in looks like " << description << " and the surrounding areas are " << connectingAreas[0] << ", " << connectingAreas[1] << "\n";
}

void Area::go()
{
	std::string newArea("");
	std::cout << "What surrounding area do you wish to move to?";
	std::cin >> newArea;
	name = newArea;
	std::cout << "You are now in area " << name << "\n";

}
