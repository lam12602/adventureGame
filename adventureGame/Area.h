#pragma once
#include <string>
#include<vector>

class Area
{
public:

	Area();
	void look();
	void go();


	std::string name;
	std::string description;
	std::vector<std::string> connectingAreas;
	std::vector<std::string> exits;
};

