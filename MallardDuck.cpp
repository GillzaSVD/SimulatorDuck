#include "MallardDuck.h"

MallardDuck::MallardDuck() {
	this->flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
	cout << "I'm Mallard Duck" << endl;
}