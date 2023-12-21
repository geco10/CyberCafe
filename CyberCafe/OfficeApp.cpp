#include "OfficeApp.h"


Instance::OfficeApp::OfficeApp(std::string path, AppInfo data):App(path,data){}

void Instance::OfficeApp::play() const
{
	std::cout << " I am this office app:  " << data.name << "\n  i work for this os type: " << data.os << "\ni have this many bytes" << data.byte << "\n";

}

Instance::App* Installers::OfficeApp::GetInstance(std::string path) const
{
    Instance::OfficeApp* data = new Instance::OfficeApp(path,this->info);
	return data;
}
