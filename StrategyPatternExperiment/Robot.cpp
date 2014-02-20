#include "Robot.h"
#include "Run.h"

Robot::Robot(void)
{
	this->setBehavior(new Run());
}


Robot::~Robot(void)
{
}
