#include <iostream>
#include "Contractor.h"
#include "LuxuryHouseBuilder.h"
#include "SimpleHouseBuilder.h"

using namespace std;

int main(void)
{
	Contractor henry;
	LuxuryHouseBuilder luxuryHouse;
	SimpleHouseBuilder simpleHouse;
	henry.initialize_builder(&luxuryHouse);
	henry.build_house();
	henry.display_house();
	henry.initialize_builder(&simpleHouse);
	henry.build_house();
	henry.display_house();
	return 0;
}