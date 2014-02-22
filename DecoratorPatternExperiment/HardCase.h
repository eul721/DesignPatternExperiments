#pragma once
#include "phonedecorator.h"
class HardCase :
	public PhoneDecorator
{
public:
	HardCase(MobileDevice* baseDevice);
	virtual ~HardCase(void);

	virtual std::string description();

	virtual float getPrice();

};

