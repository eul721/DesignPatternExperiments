#pragma once
class Creature
{
public:
//	Creature(void);
	virtual ~Creature(void);
	virtual void display(void) = 0;
	virtual float getMass(void) = 0;
};

