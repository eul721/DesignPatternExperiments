#include "CrazyFollower.h"


CrazyFollower::CrazyFollower(NewsAnnouncer* source): Follower(source)
{
}


CrazyFollower::~CrazyFollower(void)
{
}

void CrazyFollower::Rumor()
{
	std::printf("DUDE HAVE YOU HEARD? %s!\n",this->source->getCurrentNews().c_str());
}
