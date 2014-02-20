#include <Human.h>
#include <Bird.h>

#include <Robot.h>
#include <Fly.h>

int main(int argc, char **argv)
{
	Human humanA;
	Bird birdA;
	humanA.move();
	birdA.move();

	Robot robot;
	robot.move();
	robot.setBehavior(new Fly());
	robot.move();
	
}