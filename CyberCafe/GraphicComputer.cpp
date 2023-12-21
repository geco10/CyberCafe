#include "GraphicComputer.h"
void GraphicComputer::work(std::string name) {
	if (apps.contains(name)) {
		apps[name]->play();
	}
	else
		puts("you have not downloaded this Graphic app\n");
}