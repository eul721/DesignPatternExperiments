#include "HardCase.h"


HardCase::HardCase(MobileDevice* baseDevice)
{
	this->baseDevice = baseDevice;
}


HardCase::~HardCase(void)
{
}

std::string HardCase::description()
{
	return baseDevice->description() + " with Hard case";
	
}

float HardCase::getPrice()
{
	return baseDevice->getPrice() + 15.0f;
}
