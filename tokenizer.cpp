#include "includes/token.h"
#include "includes/tokenizer.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

vector<string> split(const char *str, char c = ' ')
{
    vector<string> result;

    do
    {
        const char *begin = str;

        while(*str != c && *str)
            str++;

        result.push_back(string(begin, str));
    } while (0 != *str++);

    return result;
}

Token Tokenizer::convert_to_token(string line)
{
	int token_pos;
	Token result;
	vector<string> tokens;
	tokens = split(line.c_str(),',');
	for (vector<string>::iterator n = tokens.begin();
                              n != tokens.end();
                              ++n)
	{
		if(token_pos==0)
		{
			cout << "Rule:" << *n << endl;
			result.rule = *n;
		}
		else if(token_pos==1)
		{
		}
		token_pos++;
	}
	return result;
}
