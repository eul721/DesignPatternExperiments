#pragma once
#include "mobiledevice.h"
class PhoneDecorator :
	public MobileDevice
{
public:
	
	virtual ~PhoneDecorator(void);

	virtual std::string description() = 0;

	virtual float getPrice() = 0;
protected:
	MobileDevice* baseDevice;
	
};

