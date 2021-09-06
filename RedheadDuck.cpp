#include "RedheadDuck.h"

RedheadDuck::RedheadDuck() {
	this->flyBehavior = new FlyWithWings();
}

void RedheadDuck::display() {
	cout << "I'm Redhead Duck" << endl;
}