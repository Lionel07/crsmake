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
int main(int argc, char **argv)
{
	int realargc=argc-1;
	if(!realargc) //No Arguments
	{
		printf("usage: crsmake [rulefile]\n");
	}
	else
	{
		Token tokens[10];
		ifstream rulefile(argv[1]);
		Tokenizer tokenizer;
		//Just echo for now.
		if (rulefile.is_open())
		{
			while ( rulefile.good() )
			{
				getline (rulefile,line);
				tokens[lineno]=tokenizer.convert_to_token(line);
				printf("\n");
				lineno++;
			}
			rulefile.close();
		}
		else
		{
			printf("%s does not exist\n",argv[1]);
			return 1;
		}
	}
}
