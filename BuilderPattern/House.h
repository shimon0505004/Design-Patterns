#pragma once

#include <String>

class House
{
public:
	virtual ~House() {};
	void set_window(const std::string& window);
	void set_door(const std::string& door);
	void set_bathroom(const std::string& bathroom);
	void set_kitchen(const std::string& kitchen);
	void set_floor(const std::string& floor);
	void display_house();

private:
	std::string m_window;
	std::string m_door;
	std::string m_bathroom;
	std::string m_kitchen;
	std::string m_floor;
};

