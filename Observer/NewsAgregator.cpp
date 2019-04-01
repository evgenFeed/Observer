#include "NewsAgregator.h"



NewsAgregator::NewsAgregator() : mt { rd() }, dist{ 0, 2 }
{

}


NewsAgregator::~NewsAgregator()
{
}

void NewsAgregator::RegisterObserver(IWidget* observer)
{
	observers.push_back(observer);
}

void NewsAgregator::RemoveObserver(IWidget * observer)
{
	observers.remove(observer);
}

void NewsAgregator::NotifyObservers()
{
	std::string _twitter = GetTwitterNews();
	std::string _telegram = GetTelegramNews();
	std::string _tv = GetTvNews();

	for (auto o : observers)
	{
		o->Update(_twitter, _telegram, _tv);
		o->Display();
	}
}

std::string NewsAgregator::GetTwitterNews()
{
	switch (dist(mt))
	{
	case 0: return "twitter news 1"; break;
	case 1: return "twitter news 2"; break;
	case 2: return "twitter news 3"; break;
	default: return "default news twitter"; break;
	}
}

std::string NewsAgregator::GetTelegramNews()
{
	switch (dist(mt))
	{
	case 0: return "telegram news 1"; break;
	case 1: return "telegram news 2"; break;
	case 2: return "telegram news 3"; break;
	default: return "default news telegram"; break;
	}
}

std::string NewsAgregator::GetTvNews()
{
	switch (dist(mt))
	{
	case 0: return "tv news 1"; break;
	case 1: return "tv news 2"; break;
	case 2: return "tv news 3"; break;
	default: return "default news tv"; break;
	}
}

