#pragma once
#include "HouseBuilder.h"
//Director class: builds the house
class Contractor
{
public:
	
	void initialize_builder(HouseBuilder* builder);
	void build_house();
	void display_house();

private:
	HouseBuilder* m_builder;
};

