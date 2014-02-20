#include "Follower.h"


Follower::Follower(NewsAnnouncer* source) 
{
	this->source = source;
	source->Attach(this);
}


Follower::~Follower(void)
{
}

void Follower::Update(void){
	this->Rumor();
}