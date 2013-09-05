#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <string>
#include "token.h"
class Tokenizer
{
	public:
		Token convert_to_token(std::string line);
};
#endif
