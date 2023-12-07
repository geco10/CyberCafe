#pragma once
#include<string>
#include"OSType.h"
#include"AppType.h"
struct AppInfo
{
	std::string name;
	AppType app;
	int byte;
	OSType os;
};

namespace Installers {
	class App
	{

	protected:
		AppInfo info;

	public:

		AppInfo GetInfo()const;
		virtual void GetInstance()const=0;
	};
}
