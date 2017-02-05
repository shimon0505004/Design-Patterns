#include "MealBuilder.h"
#include "Meal.h"
#include "BeefBurger.h"
#include "ChickenBurger.h"
#include "Coke.h"
#include "Pepsi.h"

MealBuilder::MealBuilder()
{
}

MealBuilder::~MealBuilder()
{
}

Meal MealBuilder::prepareBeefMeal()
{
	Meal meal = Meal();
	meal.addItem(new BeefBurger());
	meal.addItem(new Coke());
	return meal;
}

Meal MealBuilder::prepareChickenMeal()
{
	Meal meal = Meal();
	meal.addItem(new ChickenBurger());
	meal.addItem(new Pepsi());
	return meal;
}
