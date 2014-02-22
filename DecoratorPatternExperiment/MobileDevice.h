#pragma once
#include <iostream>
#include <string>
class MobileDevice
{
public:
	//MobileDevice(void);
	virtual ~MobileDevice(void);
	virtual std::string description() = 0;	
	virtual float getPrice() = 0;
};

