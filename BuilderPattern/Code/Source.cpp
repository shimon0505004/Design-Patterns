#include <iostream>
#include "MealBuilder.h"
#include "Meal.h"

int main(void)
{
	MealBuilder mealBuilder = MealBuilder();
	Meal chickenMeal = mealBuilder.prepareChickenMeal();
	Meal beefMeal = mealBuilder.prepareBeefMeal();
	std::cout << "ChickenMeal:" << std::endl;
	chickenMeal.showItems();
	std::cout << "BeefMeal:" << std::endl;
	beefMeal.showItems();

	return 0;
}
