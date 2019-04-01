#pragma once
#include <iostream>
#include <string>

class IWidget
{
public:
	virtual void Update(std::string twitter, std::string telegram, std::string tv) = 0;
	virtual void Display() = 0;
};