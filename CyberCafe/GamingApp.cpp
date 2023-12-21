#include "GamingApp.h"

Instance::GamingApp::GamingApp(std::string path, AppInfo data):App(path,data){}

Instance::App* Installers::GamingApp::GetInstance(std::string path) const
{
    Instance::GamingApp* a=new Instance::GamingApp(path,info);
    return a;
}

void Instance::GamingApp::play() const
{
    std::cout << " I am this gaming app:  " << data.name << "\n  i work for this os type: " << data.os << "\ni have this many bytes" << data.byte << "\n";
}
