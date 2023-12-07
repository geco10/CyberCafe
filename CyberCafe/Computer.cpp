#include "Computer.h"

void Computer::install(const App& app)
{
	AppInfo a=app.GetInfo();
	if (a.byte < byte && a.os == os) {
		apps[a.name] = app;
	}
}

void Computer::remove(std::string name)
{
	apps.erase(name);
}

void Computer::PrintInfo()
{
	std::cout << byte << os << aps;
}

void Computer::PrintApps()
{
	for (std::pair<std::string, App> el : apps) {
		std::cout<<el.first<<

	}
}
