#pragma once
#include <MovementBehavior.h>


class Fly : public MovementBehavior 
{
public:
	virtual void move();
	~Fly(void);
};

