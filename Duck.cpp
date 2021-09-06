#include "Duck.h"

Duck::Duck() {

}

void Duck::swim() {
	cout << "Float" << endl;
}

void Duck::performFly() {
	flyBehavior->fly();
}