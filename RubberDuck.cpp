#include "RubberDuck.h"

RubberDuck::RubberDuck() {
	this->flyBehavior = new FlyNoWay();
}

void RubberDuck::display() {
	cout << "I'm RubberDuck" << endl;
}