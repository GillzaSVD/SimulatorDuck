#include "MallardDuck.h"
#include "RedheadDuck.h"

int main()
{
    MallardDuck* duck1 = new MallardDuck();
    duck1->display();
    duck1->quack();
    RedheadDuck* duck2 = new RedheadDuck();
    duck2->display();
    duck2->quack();
}