#pragma once
#include"App.h"
namespace Installers {
	class GamingApp :public App
	{
	public:
		void GetInstance()const override;
	};
}