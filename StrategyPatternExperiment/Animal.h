#pragma once
#include <MovementBehavior.h>
class Animal : public MovementBehavior
{
public:
	void setBehavior( MovementBehavior* const behavior);
	void move();
	virtual ~Animal();


private:
	MovementBehavior* behavior;
};

