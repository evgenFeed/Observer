#include "Telegram.h"



Telegram::Telegram()
{
}


Telegram::~Telegram()
{
}

void Telegram::Update(std::string twitter, std::string telegram, std::string tv)
{
	telegram_value = telegram;
}

void Telegram::Display()
{
	std::cout << telegram_value << std::endl;
}

