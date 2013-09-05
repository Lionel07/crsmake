//
// main.cpp
//

//Includes
#include <iostream>
#include <fstream>
#include <stdio>
using namespace std;

//Variables
ifstream rulefile;
string line;
int lineno=0;
int main()
{
	printf("crsmake - v. 0.1");
	rulefile = new ifstream("crsmake.csv");
	//Just echo for now.
	if (rulefile.is_open())
	{
		while ( rulefile.good() )
		{
			getline (rulefile,line);
			printf("[%d]\t:%s\n",lineno,line.c_str());
			lineno++;
		}
		myfile.close();
	}
}
