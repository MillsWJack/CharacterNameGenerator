#include <iostream>
#include <ctime>

#include "File.h"

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	std::string finalName;

	File Prefix("Prefix.txt");
	File Suffix("Suffix.txt");

	Prefix.GetRand();
	Suffix.GetRand();

	finalName = Prefix.GetRand() + Suffix.GetRand();

	//PRINT FINAL NAME
	std::cout << finalName << std::endl;

	return 0;
}