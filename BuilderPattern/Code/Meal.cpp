#include "Meal.h"
#include "Packing.h"

Meal::Meal()
{
	items = vector<Item*>();
	items.clear();
}

Meal::~Meal()
{
}

void Meal::addItem(Item* item)
{
	items.push_back(item);
}

double Meal::getCost()
{
	double sum = 0.0;
	for (auto item : items)
		sum += item->price();

	return sum;
}

void Meal::showItems()
{
	for (auto item : items)
	{
		std::cout << "Item :" << item->name().c_str() << std::endl;
		std::cout << "Packing :" << item->packing()->pack().c_str() << std::endl;
		std::cout << "Price:" << item->price() << std::endl;
	}
}
