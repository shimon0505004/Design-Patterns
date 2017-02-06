#include "Contractor.h"

void Contractor::initialize_builder(HouseBuilder * builder)
{
	m_builder = builder;
	m_builder->initialize_house();
}

void Contractor::build_house()
{
	m_builder->build_bathroom();
	m_builder->build_door();
	m_builder->build_floor();
	m_builder->build_kitchen();
	m_builder->build_window();
}

void Contractor::display_house()
{
	m_builder->display_house();
}
