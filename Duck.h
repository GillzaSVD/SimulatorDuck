#pragma once

#include <iostream>
using namespace std;

class Duck
{
public:
	Duck();
	void swim(); //��������
	virtual void display() = 0; //�����������
};

