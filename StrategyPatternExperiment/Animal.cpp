#include "Animal.h"




Animal::~Animal(void)
{
	delete behavior;
}

void Animal::setBehavior( MovementBehavior* const behavior){
	if(this->behavior!=NULL)
		delete this->behavior;
	this->behavior = behavior;
}

void Animal::move(){
	behavior->move();
}
