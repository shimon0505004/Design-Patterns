#include "LuxuryHouseBuilder.h"

void LuxuryHouseBuilder::build_bathroom()
{
	m_house->set_bathroom("Kohler appliances");
}

void LuxuryHouseBuilder::build_door()
{
	m_house->set_door("Oak wood door");
}

void LuxuryHouseBuilder::build_floor()
{
	m_house->set_floor("Marble floor");
}

void LuxuryHouseBuilder::build_kitchen()
{
	m_house->set_kitchen("Steel appliance kitchen");
}

void LuxuryHouseBuilder::build_window()
{
	m_house->set_window("Glass window");
}
