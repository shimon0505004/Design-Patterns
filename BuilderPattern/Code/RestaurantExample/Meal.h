#pragma once
#include<iostream>
#include<vector>
#include "Item.h"

using namespace std;

class Meal
{
public:
	Meal();
	~Meal();
	void addItem(Item* item);
	double getCost();
	void showItems();

private:
	std::vector<Item*> items;
};

