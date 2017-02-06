#pragma once
#include <iostream>
#include <memory>
#include "House.h"

class HouseBuilder
{
public:
	void initialize_house();
	virtual void build_window() = 0;
	virtual void build_door() = 0;
	virtual void build_bathroom() = 0;
	virtual void build_kitchen() = 0;
	virtual void build_floor() = 0;
	void display_house() const { m_house->display_house(); };

protected:
	std::unique_ptr<House> m_house;
};

