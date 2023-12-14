#pragma once
#include<map>
#include"App.h"
#include"OSType.h"
#include<string>
#include<iostream>
struct ComputerInfo {
	int byte;
	OSType os;
};
class Computer
{
	void PrintMap();
protected:
	ComputerInfo info;
	std::map<std::string,Instance::App*>apps;
	virtual void work(std::string name)const = 0;
	void install(const Installers::App& app);
	void remove(std::string name);
public:
	ComputerInfo GetInfo();
	void PrintInfo();
};

