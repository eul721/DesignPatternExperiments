#pragma once
#include <stdio.h>
class MovementBehavior
{
public:
	MovementBehavior();
	virtual void move() = 0; //print move string
	virtual ~MovementBehavior(void);
};

