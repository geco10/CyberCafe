#pragma once
#include"App.h"
namespace Installers {
	class OfficeApp :public App
	{
	public:
		Instance::App* GetInstance()const override;
	};
}