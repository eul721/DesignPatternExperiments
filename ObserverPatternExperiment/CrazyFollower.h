#pragma once
#include "observer.h"
#include <Follower.h>
class CrazyFollower :
	public Follower
{
public:
	CrazyFollower(NewsAnnouncer* source);
	virtual ~CrazyFollower(void);
	virtual void Rumor();
};

