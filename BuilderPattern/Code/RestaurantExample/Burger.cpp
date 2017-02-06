#include "Burger.h"
#include "Wrapper.h"

Packing* Burger::packing()
{
	return new Wrapper();
}
