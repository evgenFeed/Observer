#pragma once
#include "IWidget.h"
class Telegram :
	public IWidget
{
public:
	Telegram();
	~Telegram();
	void Update(std::string twitter, std::string telegram, std::string tv) override;
	void Display() override;
private:
	std::string telegram_value;
};

