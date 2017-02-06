#pragma once
#include "Item.h"
class ColdDrink :
	public Item
{
public:
	Packing* packing() override;
};

