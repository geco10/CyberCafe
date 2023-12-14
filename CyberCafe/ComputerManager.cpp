#include "ComputerManager.h"

void ComputerManager::add(Computer* a)
{
	computers.push_back(a);
}

void ComputerManager::remove(int i)
{
	delete computers[i];
	computers.erase(computers.begin() + i);
}

void ComputerManager::GetInfo()
{
	for (Computer* a : computers) {
		a->PrintInfo();
	}
}
