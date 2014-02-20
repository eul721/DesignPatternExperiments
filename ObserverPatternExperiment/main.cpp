#include <NewsAnnouncer.h>
#include <CrazyFollower.h>
#include <CalmFollower.h>

int main(int argc, char **argv){
	NewsAnnouncer* mainAnnouncer = new NewsAnnouncer();
	CalmFollower calmA(mainAnnouncer);
	CrazyFollower crazyA(mainAnnouncer);

	mainAnnouncer->setCurrentNews("Tomorrow is going to rain.");

	mainAnnouncer->setCurrentNews("IRAQ WAR!");

	

}
