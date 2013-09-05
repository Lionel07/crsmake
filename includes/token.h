#ifndef TOKEN_H
#define TOKEN_H
#include <string>
class Token
{
	int id;
	std::string rule;
	std::string descriptor;
	std::string descriptor_params[2]; //Maximum of THREE Paramaters.
	std::string action;
	//TokenAnalasys ta;
};

#endif
