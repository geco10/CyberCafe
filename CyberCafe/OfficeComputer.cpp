#include "OfficeComputer.h"
void OfficeComputer::work(std::string name) {
	if (apps.contains(name)) {
		apps[name]->play();
	}
	else
		puts("you have not downloaded this Office app\n");
}