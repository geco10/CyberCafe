#pragma once
#include<string>
#include"OSType.h"
#include"AppType.h"
class App
{
protected:
	std::string name;
	AppType app;
	int byte;
	OSType os;
public:
	virtual void play()const = 0;
};

