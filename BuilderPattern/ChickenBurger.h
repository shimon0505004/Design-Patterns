#pragma once
#include "Burger.h"
class ChickenBurger :
	public Burger
{
public:
	ChickenBurger();
	~ChickenBurger();
	std::string name() override;
	double price() override;
};

