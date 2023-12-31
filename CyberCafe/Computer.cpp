#include "Computer.h"

void Computer::install(const Installers::App& app,std::string path)
{
	if (app.GetInfo().byte <= info.byte && app.GetInfo().os == info.os) {
		if (!apps.contains(app.GetInfo().name))
			apps[app.GetInfo().name] =app.GetInstance(path);
		else
			throw "-1 application was already downloaded";
	}
	else
		throw "-2 the parameters are different from your regulation";
}

void Computer::remove(std::string name)
{
	delete apps[name];
	apps.erase(name);
}

ComputerInfo Computer::GetInfo()
{
	return info;
}

void Computer::PrintInfo()
{
	std::cout << info.byte <<"  " << info.os<<"  ";
	PrintMap();
	
}

void Computer::PrintMap()
{
	for (std::pair<std::string, Instance::App*> el : apps) {
		std::cout << el.first <<"   "<< el.second<<"\n";
	}
}
