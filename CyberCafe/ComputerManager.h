#pragma once
#include"Computer.h"
#include<vector>
class ComputerManager
{
	std::vector<Computer*> computers;
public:
	void add(Computer* a);
	void remove(int i);
	void GetInfo();
};

