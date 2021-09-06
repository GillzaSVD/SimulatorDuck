#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "FlyBehavior.h"
using namespace std;

class Duck
{
public:
	FlyBehavior* flyBehavior;
	Duck();
	void swim(); //плаванье
	virtual void display() = 0; //отображение
	void performFly(); //полет
};

#endif