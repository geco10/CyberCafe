#pragma once
enum OSType
{
	HP,
	Apple,
	Samsung,
	AlienWare
};
std::string OsString(OSType os){
	switch(os){
	case OSType::HP:
		return "HP";
	case OSType::Apple:
		return "Apple";
	case OSType::Samsung:
		return "Samsung";
	case OSType::AlienWare:
		return "AlienWare";
	}
}