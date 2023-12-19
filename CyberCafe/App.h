#pragma once
#include<iostream>
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
		AppInfo data;
	public:
		App(std::string Path,AppInfo Data);
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
		virtual Instance::App* GetInstance(std::string path)const=0;
	};
}
