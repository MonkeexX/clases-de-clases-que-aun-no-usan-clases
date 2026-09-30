#include <fstream>
#include <iostream>
#include <string>
void main()
{
	std::ifstream myFile;
	myFile.open("test.txt");
	
	/*if (myFile.is_open())
	{
		int x1, y1;

		myFile >> x1 >> y1;

		std::cout << x1 <<" " << y1 << std::flush;
	}

	if (myFile.is_open())
	{
		std::string line;
		while (std::getline(myFile, line))
		{
			std::cout << line << std::flush;
		}
	}

	char text[200];
	if (myFile.is_open())
	{

		while(!myFile.eof())
		{
			myFile >> text;
			std::cout << text << std::endl;
		}
	}

	int x = 67;
	char c = '-';
	std::string s = "Mondongo";

	std::ofstream myFile("test.txt");
	if (myFile.is_open())
	{
		myFile << x;
		myFile << c;
		myFile << s;

	}*/
}