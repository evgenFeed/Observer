#pragma once
#include "ISubject.h"
#include "Telegram.h"
#include "Tv.h"
#include "Twitter.h"
#include <list>
#include <random>

class NewsAgregator :
	public ISubject
{
public:
	NewsAgregator();
	~NewsAgregator();
	void RegisterObserver(IWidget* observer) override;
	void RemoveObserver(IWidget* observer) override;
	void NotifyObservers() override;
	std::string GetTwitterNews();
	std::string GetTelegramNews();
	std::string GetTvNews();
protected:
	std::list<IWidget*> observers;
private:
	Twitter _twitterWidget;
	Telegram _telegramWidget;
	Tv _tvWidget;
	std::random_device rd;
	std::mt19937 mt;
	std::uniform_int_distribution<int> dist;
	
};

