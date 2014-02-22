#include <Android.h>
#include <HardCase.h>
#include <iostream>
int main (int argn,char* args){
	Android* myAndroid = new Android();
	std::cout << "Base Android: " << myAndroid->description() << std::endl;
	std::cout << "Base Android Price : " << myAndroid->getPrice() << std::endl;

	MobileDevice* enhancedPhone = new HardCase(myAndroid);

	std::cout << "Enhance Android: " << enhancedPhone->description() << std::endl;
	std::cout << "Enhance Android Price : " << enhancedPhone->getPrice() << std::endl;

}
				