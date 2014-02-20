#include "Bird.h"
#include <Fly.h>

Bird::Bird(void)
{
	this->setBehavior(new Fly());
}


Bird::~Bird(void)
{
}
