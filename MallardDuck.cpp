#include "MallardDuck.h"

MallardDuck::MallardDuck() {
	this->flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
	cout << "I'm MallardDuck" << endl;
}