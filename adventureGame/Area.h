#pragma once
#include <string>
#include<vector>

class Player;

class Area
{
public:

	Area();
	void look();
	void go();


private:
	std::string name;
	std::string description;
	std::vector<std::string> connectingAreas;
	std::vector<std::string> exits;
};

