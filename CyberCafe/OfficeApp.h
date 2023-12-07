#pragma once
#include"App.h"
namespace Installers {
	class OfficeApp :public App
	{
	public:
		void GetInstance()const override;
	};
}