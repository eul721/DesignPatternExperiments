#include "Human.h"
#include <Run.h>

Human::Human(void)
{
	this->setBehavior(new Run());
}


Human::~Human(void)
{

}
