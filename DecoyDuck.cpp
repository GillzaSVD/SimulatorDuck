#include "DecoyDuck.h"

DecoyDuck::DecoyDuck() {
	this->flyBehavior = new FlyNoWay();
}

void DecoyDuck::display() {
	cout << "I'm Decoy Duck" << endl;
}