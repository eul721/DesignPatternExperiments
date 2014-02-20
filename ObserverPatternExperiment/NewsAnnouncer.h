#pragma once
#include <Subject.h>
#include <string>
#include <vector>



class NewsAnnouncer : public Subject 
{
public:
	NewsAnnouncer(void);
	const std::string  getCurrentNews() const;
	void  setCurrentNews(std::string);
	virtual ~NewsAnnouncer(void);

	virtual int Attach(  Observer* const);
	virtual int Detach(  Observer* const);
	virtual void Notify();
private:
	std::vector<  Observer* const> subscribers;
	std::string currentNews;
};

