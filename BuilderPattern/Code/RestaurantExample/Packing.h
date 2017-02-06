#pragma once

#include<iostream>

//pure virtual class
class Packing
{
public:
	Packing();
	~Packing();
	virtual std::string pack();
};

