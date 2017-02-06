#include "House.h"
#include <iostream>

using namespace std;

void House::set_window(const std::string & window)
{
	m_window = window;
}

void House::set_door(const std::string & door)
{
	m_door = door;
}

void House::set_bathroom(const std::string & bathroom)
{
	m_bathroom = bathroom;
}

void House::set_kitchen(const std::string & kitchen)
{
	m_kitchen = kitchen;
}

void House::set_floor(const std::string & floor)
{
	m_floor = floor;
}

void House::display_house()
{
	cout << "Floor: " << m_floor.c_str() << endl;
	cout << "Kitchen: " << m_kitchen.c_str() << endl;
	cout << "Bathroom: " << m_bathroom.c_str() << endl;
	cout << "Door: " << m_door.c_str() << endl;
	cout << "Window: " << m_window.c_str() << endl;
}
