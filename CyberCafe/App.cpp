#include "App.h"
AppInfo Installers::App::GetInfo()const{
  return info;
}


Instance::App::App(std::string Path, AppInfo Data)
{
	path = Path;
	data = Data;
}
