#pragma once
#include"Computer.h"
class OfficeComputer :public Computer
{
public:
	void work(std::string name) override;
};

