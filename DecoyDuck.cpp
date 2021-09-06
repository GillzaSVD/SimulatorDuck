#include "DecoyDuck.h"

DecoyDuck::DecoyDuck() {
	this->flyBehavior = new FlyNoWay();
}

void DecoyDuck::display() {
	cout << "I'm DecoyDuck" << endl;
}