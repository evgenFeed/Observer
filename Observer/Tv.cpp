#include "Tv.h"



Tv::Tv()
{
}


Tv::~Tv()
{
}

void Tv::Update(std::string twitter, std::string telegram, std::string tv)
{
	tv_value = tv;
}

void Tv::Display()
{
	std::cout << tv_value << std::endl;
}
