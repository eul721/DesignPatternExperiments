#include "Android.h"


Android::Android(void)
{
}


Android::~Android(void)
{
}

std::string Android::description()
{
	return "This is an Android Phone";
}

float Android::getPrice()
{
	return 400.0f; //android SYSTEMS are open source. No price required.
}
