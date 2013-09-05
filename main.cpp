//
// main.cpp
//

//Includes
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "includes/token.h"
#include "includes/tokenizer.h"
using namespace std;

//Variables
string line;
int lineno=0;
int main()
{
	printf("crsmake - v. 0.1\n");
	ifstream rulefile("crsmake.csv");
	Tokenizer tokenizer;
	//Just echo for now.
	if (rulefile.is_open())
	{
		while ( rulefile.good() )
		{
			getline (rulefile,line);
			printf("[\t%d]:%s\n",lineno,line.c_str());
			tokenizer.convert_to_token(line);

			lineno++;
		}
		rulefile.close();
	}
}
