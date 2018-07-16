#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line;
	ifstream myFile;
	string finalName;

	int num;
	cout << "What line?\n";
	cin >> num;

	myFile.open("Prefix.txt");
	if (myFile.is_open())
	{
		for(int i = 0; i < num; i++)
		{
			getline(myFile, line);
		}
		finalName = line;
		myFile.close();
	}

	int num2;
	cout << "What line?\n";
	cin >> num2;

	myFile.open("Suffix.txt");
	if (myFile.is_open())
	{
		for (int i = 0; i < num2; i++)
		{
			getline(myFile, line);
		}
		finalName += line;
		myFile.close();
	}

	cout << finalName << endl;

	return 0;
}