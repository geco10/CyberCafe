#pragma once
#include"App.h"
namespace Installers {
	class GamingApp :public App
	{
	public:
		Instance::App* GetInstance()const override;
	};
}
namespace Instance {
	class GamingApp :public App
	{
	public:
		virtual Instance::App* GetInstance()const ;
	};
}