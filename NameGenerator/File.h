#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class File
{
public:
	File(const std::string File);
	~File();

	const std::string GetRand();
	void PopulateVector();

private:
	std::string m_FileLocation;
	std::fstream m_File;
	std::vector<std::string> m_nameList;
	std::string m_Line;
};

