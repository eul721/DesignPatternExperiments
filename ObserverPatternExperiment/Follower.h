#pragma once
#include "observer.h"
#include <NewsAnnouncer.h>
class Follower :
	public Observer
{
public:
	Follower(NewsAnnouncer* source);
	virtual ~Follower(void);
	virtual void Update();
protected:
	virtual void Rumor() = 0;

	NewsAnnouncer* source;

};

