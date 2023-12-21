#include "GamingComputer.h"
void GamingComputer::work(std::string name) {
	if (apps.contains(name)) {
		apps[name]->play();
	}
	else
		puts("you have not downloaded this Gaming app\n");
}