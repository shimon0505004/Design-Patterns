#pragma once
#include "HouseBuilder.h"
class SimpleHouseBuilder :
	public HouseBuilder
{
public:
	virtual ~SimpleHouseBuilder() {};
	virtual void build_bathroom() override;
	virtual void build_door() override;
	virtual void build_floor() override;
	virtual void build_kitchen() override;
	virtual void build_window() override;
};

