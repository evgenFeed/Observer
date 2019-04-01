#include <iostream>
#include "NewsAgregator.h"
#include "Telegram.h"
#include "Tv.h"
#include "Twitter.h"

int main()
{
	NewsAgregator agrNews;
	agrNews.RegisterObserver(new Telegram());
	agrNews.RegisterObserver(new Twitter());
	agrNews.RegisterObserver(new Tv());

	agrNews.NotifyObservers();
	std::cout << std::endl;
	agrNews.NotifyObservers();


	return 0;
}