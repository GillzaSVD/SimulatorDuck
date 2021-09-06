#pragma once

#include <iostream>
using namespace std;

class Duck
{
public:
	Duck();
	void swim(); //плаванье
	virtual void display() = 0; //отображение
};

