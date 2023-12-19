#pragma once
#include"App.h"
namespace Installers {
	class GamingApp :public App
	{
	public:
		Instance::App* GetInstance(std::string path)const override;
	};
}
namespace Instance {
	class GamingApp :public App
	{
	public:
		void play()const override;
	};
}