#include "Twitter.h"



Twitter::Twitter()
{
}


Twitter::~Twitter()
{
}

void Twitter::Update(std::string twitter, std::string telegram, std::string tv)
{
	twitter_value = twitter;
}

void Twitter::Display()
{
	std::cout << twitter_value << std::endl;
}

