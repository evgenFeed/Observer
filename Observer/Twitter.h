#pragma once
#include "IWidget.h"

class Twitter :
	public IWidget
{
public:
	Twitter();
	~Twitter();
	void Update(std::string twitter, std::string telegram, std::string tv) override;
	void Display() override;
private:
	std::string twitter_value;

};

