#include "CalmFollower.h"


CalmFollower::CalmFollower(NewsAnnouncer* source): Follower(source)
{
}


CalmFollower::~CalmFollower(void)
{
}

void CalmFollower::Rumor()
{
	std::printf("Meh. So %s. Normal.\n",source->getCurrentNews().c_str());
}
