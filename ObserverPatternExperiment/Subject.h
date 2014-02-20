#pragma once
#include <Observer.h>

class Subject
{
public:
	virtual int Attach( Observer* const) = 0;
	virtual int Detach( Observer* const) = 0;
	virtual void Notify() = 0;
	virtual ~Subject(void);


};

