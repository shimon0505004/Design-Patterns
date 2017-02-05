#pragma once
#include "ColdDrink.h"
class Coke :
	public ColdDrink
{
public:
	Coke();
	~Coke();
	std::string name() override;
	double price() override;
};

