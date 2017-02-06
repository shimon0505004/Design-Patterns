#pragma once

#include<iostream>

class Packing;

class Item
{
public:
	virtual std::string name() = 0;
	virtual Packing* packing() = 0;
	virtual double price() = 0;
};

