//
// main.cpp
//

//Includes
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

//Variables
string line;
int lineno=0;
int main()
{
	printf("crsmake - v. 0.1\n");
	ifstream rulefile("crsmake.csv");
	//Just echo for now.
	if (rulefile.is_open())
	{
		while ( rulefile.good() )
		{
			getline (rulefile,line);
			printf("[\t%d]:%s\n",lineno,line.c_str());
			lineno++;
		}
		rulefile.close();
	}
}
