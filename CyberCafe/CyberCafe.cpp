#include <iostream>
#include"GamingComputer.h"
#include"GraphicComputer.h"
#include"OfficeComputer.h"
#include"App.h"
int main()
{
	OfficeComputer comp;
	comp.PrintInfo();
	comp.work("Macintosh");
}
