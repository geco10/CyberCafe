#pragma once
#include"App.h"
namespace Installers {
	class GamingApp :public App
	{
	public:
		Instance::App* GetInstance()const override;
	};
}