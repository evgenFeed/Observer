#pragma once
#include "IWidget.h"

class ISubject
{
public:
	virtual void RegisterObserver(IWidget* observer) = 0;
	virtual void RemoveObserver(IWidget* observer) = 0;
	virtual void NotifyObservers() = 0;
};