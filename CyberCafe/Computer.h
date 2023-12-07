#pragma once
#include<map>
#include"App.h"
#include"OSType.h"
#include<string>
#include<iostream>
class Computer
{
	void PrintApps();
protected:
	int byte;
	OSType os;
	std::map<std::string,App>apps;
	virtual void work(std::string name)const = 0;
	void install(const App& app);
	void remove(std::string name);
public:

	void PrintInfo();
};

