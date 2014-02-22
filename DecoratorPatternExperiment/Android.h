#pragma once
#include "mobiledevice.h"
class Android :
	public MobileDevice
{
public:
	Android(void);
	virtual ~Android(void);

	virtual std::string description();

	virtual float getPrice();

};

