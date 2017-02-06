#pragma once
class Meal;
class MealBuilder
{
public:
	MealBuilder();
	~MealBuilder();
	Meal prepareBeefMeal();
	Meal prepareChickenMeal();
};

