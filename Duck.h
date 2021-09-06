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
	void swim(); //��������
	virtual void display() = 0; //�����������
	void performFly(); //�����
};

#endif