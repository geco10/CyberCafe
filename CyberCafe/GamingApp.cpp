#include "GamingApp.h"

Instance::App* Installers::GamingApp::GetInstance() const
{
    Instance::GamingApp* a=new Instance::GamingApp;
    return a;
}
