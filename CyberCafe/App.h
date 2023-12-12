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
namespace Instance {
	class App {
	protected:
		std::string path;
		int bytes;
		OSType os;
	public:
		virtual void play ()const = 0;
	};
}
namespace Installers {
	class App
	{

	protected:
		AppInfo info;

	public:

		AppInfo GetInfo()const;
		virtual Instance::App* GetInstance()const=0;
	};
}
