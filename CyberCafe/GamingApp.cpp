#include "GamingApp.h"

Instance::App* Installers::GamingApp::GetInstance(std::string path) const
{
    Instance::GamingApp* a=new Instance::GamingApp(path,info);
    return a;
}

void Instance::GamingApp::play() const
{
    std::cout<<"I am this app:"<<data.name<<
}
