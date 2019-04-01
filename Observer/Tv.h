#pragma once
#include "IWidget.h"

class Tv :
	public IWidget
{
public:
	Tv();
	~Tv();
	void Update(std::string twitter, std::string telegram, std::string tv) override;
	void Display() override;
private:
	std::string tv_value;
};

