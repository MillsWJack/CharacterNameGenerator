#include "File.h"

File::File(const std::string File):
	m_FileLocation(File)
{
	PopulateVector();
}

File::~File()
{
}

const std::string File::GetRand()
{
	int randNum = rand() % m_nameList.size();

	return m_nameList[randNum];
}

void File::PopulateVector()
{
	m_File.open(m_FileLocation);
	if (m_File.is_open())
	{
		while (!m_File.eof())
		{
			getline(m_File, m_Line);
			m_nameList.push_back(m_Line);
		}
	}
}
