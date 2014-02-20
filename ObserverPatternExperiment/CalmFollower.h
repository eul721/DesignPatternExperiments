#pragma once
#include "observer.h"
#include <Follower.h>
class CalmFollower :
	public Follower
{
public:
	CalmFollower(NewsAnnouncer* source);
	~CalmFollower(void);
	virtual void Rumor();
};

