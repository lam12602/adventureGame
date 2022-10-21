#pragma once
#include <string>
#include<vector>

class Area
{
public:

	Area();
	void look(Area description);
	void go(Area name);


	std::string name;
	std::string description;
	std::vector<std::string> contents;
	std::vector<std::string> exits;
};

