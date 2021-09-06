#pragma once

#include "Duck.h"

class DecoyDuck : public Duck
{
public:
	DecoyDuck();
	void quack();
	void display();
	void fly();
};