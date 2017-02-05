#pragma once
#include "Burger.h"
class BeefBurger :
	public Burger
{
public:
	BeefBurger();
	~BeefBurger();
	std::string name();
	double price();

};

