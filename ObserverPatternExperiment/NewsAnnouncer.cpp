#include "NewsAnnouncer.h"


NewsAnnouncer::NewsAnnouncer(void)
{
}


NewsAnnouncer::~NewsAnnouncer(void)
{
}

const std::string NewsAnnouncer::getCurrentNews() const{	
	return this->currentNews;
}
void  NewsAnnouncer::setCurrentNews(std::string news){
	this->currentNews = news;
	Notify();
}

int  NewsAnnouncer::Attach(  Observer* const subscriber ){
	subscribers.push_back(subscriber);
	return this->subscribers.size();
}
int  NewsAnnouncer::Detach(  Observer* const targetSubscriber){
	auto found = std::find(this->subscribers.begin(),this->subscribers.end(),targetSubscriber);
	if(found!=this->subscribers.end())
		this->subscribers.erase(found);
	return this->subscribers.size();
}

void  NewsAnnouncer::Notify(){
	for (unsigned i = 0; i < this->subscribers.size() ; i++){
		subscribers[i]->Update();
	}

}
