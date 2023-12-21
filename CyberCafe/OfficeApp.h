#pragma once
#include"App.h"
namespace Installers {
	class OfficeApp :public App
	{
	public:
		Instance::App* GetInstance(std::string path)const override;
	};
}
namespace Instance {
	class OfficeApp :public App
	{
	public:
		OfficeApp(std::string path,AppInfo data);
		void play()const override;
	};
}