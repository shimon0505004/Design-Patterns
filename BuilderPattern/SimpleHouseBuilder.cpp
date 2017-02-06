#include "SimpleHouseBuilder.h"

void SimpleHouseBuilder::build_bathroom()
{
	m_house->set_bathroom("Simple bathroom");
}

void SimpleHouseBuilder::build_door()
{
	m_house->set_door("Regular wood door");
}

void SimpleHouseBuilder::build_floor()
{
	m_house->set_floor("wooden floor");
}

void SimpleHouseBuilder::build_kitchen()
{
	m_house->set_kitchen("Regular appliance");
}

void SimpleHouseBuilder::build_window()
{
	m_house->set_window("Wooden window");
}
