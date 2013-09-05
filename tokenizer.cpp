#include "includes/token.h"
#include "includes/tokenizer.h"
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
	Token result;
	vector<string> tokens;
	tokens = split(line,',')
	for (vector<string>::iterator n = tokens.begin();
                              n != tokens.end();
                              ++n)
	{
	    printf("Token:%s\n",*n);
	}
	
	return result;
}
