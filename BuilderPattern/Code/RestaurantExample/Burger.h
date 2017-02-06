#pragma once
#include "Item.h"
class Burger :
	public Item
{
public:
	Packing* packing() override;
};

